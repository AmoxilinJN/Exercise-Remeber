// 商品数据
const products = [
    {
        id: 1,
        name: "iPhone 15 Pro",
        price: 19190,
        category: "electronics",
        brand: "apple",
        image: "./img/iphone.jpg",
        description: "最新款iPhone，配备A17 Pro芯片，钛金属机身，专业级相机系统。",
        specs: {
            colors: ["深空黑", "银色", "金色", "深紫色"],
            storage: ["128GB", "256GB", "512GB", "1TB"]
        }
    },
    {
        id: 2,
        name: "MacBook Air M2",
        price: 13140,
        category: "electronics",
        brand: "apple",
        image: "./img/macbook.jpg",
        description: "超薄轻便的笔记本电脑，M2芯片强劲性能，全天候电池续航。",
        specs: {
            colors: ["深空灰", "银色", "金色", "午夜色"],
            memory: ["8GB", "16GB", "24GB"]
        }
    },
    {
        id: 3,
        name: "Nike Air Max 270",
        price: 8100,
        category: "clothing",
        brand: "nike",
        image: "./img/nike.jpg",
        description: "经典跑步鞋，舒适气垫，时尚外观，适合日常运动和休闲。",
        specs: {
            colors: ["黑色", "白色", "蓝色", "红色"],
            sizes: ["39", "40", "41", "42", "43", "44"]
        }
    },
    {
        id: 4,
        name: "Adidas Ultra Boost",
        price: 110721,
        category: "clothing",
        brand: "adidas",
        image: "./img/adidas.jpg",
        description: "顶级跑鞋，Boost中底技术，提供卓越的能量回馈和舒适性。",
        specs: {
            colors: ["黑色", "白色", "灰色"],
            sizes: ["39", "40", "41", "42", "43", "44", "45"]
        }
    },
    {
        id: 5,
        name: "JavaScript权威指南",
        price: 2024,
        category: "books",
        brand: "other",
        image: "./img/javascript.jpg",
        description: "JavaScript编程语言的权威参考书，适合初学者和高级开发者。",
        specs: {
            edition: ["第7版"],
            format: ["平装", "精装", "电子版"]
        }
    },
    {
        id: 6,
        name: "智能台灯",
        price: 2025,
        category: "home",
        brand: "other",
        image: "./img/lamp.jpg",
        description: "LED智能台灯，可调节亮度和色温，支持语音控制和手机APP。",
        specs: {
            colors: ["白色", "黑色"],
            features: ["护眼", "调光", "定时"]
        }
    }
];

// 购物车数据
let cart = [
    {
        id: 1,
        name: "iPhone 15 Pro",
        price: 19190,
        image: "./img/iphone.jpg",
        quantity: 1,
        specs: { color: "深空黑", storage: "256GB" }
    },
    {
        id: 3,
        name: "Nike Air Max 270",
        price: 8100,
        image: "./img/nike.jpg",
        quantity: 2,
        specs: { color: "黑色", size: "42" }
    }
];

// 页面加载完成后执行
document.addEventListener('DOMContentLoaded', function() {
    const currentPage = window.location.pathname.split('/').pop();
    
    // 更新购物车数量显示
    updateCartCount();
    
    // 根据当前页面执行相应初始化
    switch(currentPage) {
        case 'index.html':
        case '':
            initIndexPage();
            break;
        case 'detail.html':
            initDetailPage();
            break;
        case 'cart.html':
            initCartPage();
            break;
    }
});

// 首页初始化
function initIndexPage() {
    renderProducts(products);
    setupFilters();
}

// 渲染商品列表
function renderProducts(productsToRender) {
    const productGrid = document.getElementById('product-grid');
    
    if (productsToRender.length === 0) {
        productGrid.innerHTML = '<div class="no-products">没有找到符合条件的商品</div>';
        return;
    }
    
    productGrid.innerHTML = productsToRender.map(product => `
        <div class="product-card" onclick="goToDetail(${product.id})">
            <img src="${product.image}" alt="${product.name}" class="product-image">
            <div class="product-info">
                <h3 class="product-title">${product.name}</h3>
                <p class="product-price">¥${product.price}</p>
                <p class="product-description">${product.description}</p>
            </div>
        </div>
    `).join('');
}

// 设置筛选功能
function setupFilters() {
    const categoryFilter = document.getElementById('category-filter');
    const priceFilter = document.getElementById('price-filter');
    const priceDisplay = document.getElementById('price-display');
    const brandFilters = document.querySelectorAll('.brand-filter');
    const filterBtn = document.getElementById('filter-btn');
    const resetBtn = document.getElementById('reset-btn');
    
    // 价格滑块实时更新显示
    priceFilter.addEventListener('input', function() {
        priceDisplay.textContent = `0-${this.value}元`;
    });
    
    // 筛选按钮事件
    filterBtn.addEventListener('click', applyFilters);
    resetBtn.addEventListener('click', resetFilters);
}

// 应用筛选
function applyFilters() {
    const category = document.getElementById('category-filter').value;
    const maxPrice = parseInt(document.getElementById('price-filter').value);
    const selectedBrands = Array.from(document.querySelectorAll('.brand-filter:checked'))
                                .map(cb => cb.value);
    
    let filteredProducts = products.filter(product => {
        const categoryMatch = !category || product.category === category;
        const priceMatch = product.price <= maxPrice;
        const brandMatch = selectedBrands.length === 0 || selectedBrands.includes(product.brand);
        
        return categoryMatch && priceMatch && brandMatch;
    });
    
    renderProducts(filteredProducts);
}

// 重置筛选
function resetFilters() {
    document.getElementById('category-filter').value = '';
    document.getElementById('price-filter').value = '114514';
    document.getElementById('price-display').textContent = '0-114514元';
    document.querySelectorAll('.brand-filter').forEach(cb => cb.checked = false);
    renderProducts(products);
}

// 跳转到商品详情页
function goToDetail(productId) {
    window.location.href = `detail.html?id=${productId}`;
}

// 详情页初始化
function initDetailPage() {
    const urlParams = new URLSearchParams(window.location.search);
    const productId = parseInt(urlParams.get('id'));
    const product = products.find(p => p.id === productId);
    
    if (!product) {
        document.getElementById('product-detail').innerHTML = '<p>商品不存在</p>';
        return;
    }
    
    renderProductDetail(product);
    setupDetailPage(product);
}

// 渲染商品详情
function renderProductDetail(product) {
    const detailContainer = document.getElementById('product-detail');
    
    const specOptions = Object.entries(product.specs).map(([key, values]) => `
        <div class="option-group">
            <label>${getSpecLabel(key)}：</label>
            <select id="${key}-select">
                ${values.map(value => `<option value="${value}">${value}</option>`).join('')}
            </select>
        </div>
    `).join('');
    
    detailContainer.innerHTML = `
        <div class="detail-content">
            <div class="detail-image-container">
                <img src="${product.image}" alt="${product.name}" class="detail-image">
            </div>
            <div class="detail-info">
                <h1>${product.name}</h1>
                <p class="detail-price">¥${product.price}</p>
                <p class="detail-description">${product.description}</p>
                
                <div class="product-options">
                    ${specOptions}
                    <div class="option-group">
                        <label>数量：</label>
                        <input type="number" id="quantity-input" value="1" min="1" max="10">
                    </div>
                </div>
                
                <button class="add-to-cart-btn" onclick="addToCart(${product.id})">
                    加入购物车
                </button>
            </div>
        </div>
    `;
}

// 获取规格标签
function getSpecLabel(key) {
    const labels = {
        colors: '颜色',
        storage: '存储',
        memory: '内存',
        sizes: '尺码',
        edition: '版本',
        format: '格式',
        features: '功能'
    };
    return labels[key] || key;
}

// 设置详情页事件
function setupDetailPage(product) {
    // 设置模态框
    const modal = document.getElementById('success-modal');
    const closeBtn = document.querySelector('.close');
    
    closeBtn.onclick = function() {
        modal.style.display = 'none';
    };
    
    window.onclick = function(event) {
        if (event.target === modal) {
            modal.style.display = 'none';
        }
    };
}

// 添加到购物车
function addToCart(productId) {
    const product = products.find(p => p.id === productId);
    const quantity = parseInt(document.getElementById('quantity-input').value);
    
    // 获取选中的规格
    const specs = {};
    Object.keys(product.specs).forEach(key => {
        const selectElement = document.getElementById(`${key}-select`);
        if (selectElement) {
            specs[key] = selectElement.value;
        }
    });
    
    // 检查购物车中是否已有相同商品和规格
    const existingItem = cart.find(item => 
        item.id === productId && 
        JSON.stringify(item.specs) === JSON.stringify(specs)
    );
    
    if (existingItem) {
        existingItem.quantity += quantity;
    } else {
        cart.push({
            id: productId,
            name: product.name,
            price: product.price,
            image: product.image,
            quantity: quantity,
            specs: specs
        });
    }
    
    // 更新购物车数量显示
    updateCartCount();
    
    // 显示购买成功提示
    showSuccessModal(product, quantity, specs);
}

// 显示购买成功模态框
function showSuccessModal(product, quantity, specs) {
    const modal = document.getElementById('success-modal');
    const purchaseInfo = document.getElementById('purchase-info');
    
    const specText = Object.entries(specs).map(([key, value]) => 
        `${getSpecLabel(key)}：${value}`
    ).join('，');
    
    const totalPrice = product.price * quantity;
    
    purchaseInfo.innerHTML = `
        <p><strong>商品名称：</strong>${product.name}</p>
        <p><strong>规格：</strong>${specText}</p>
        <p><strong>数量：</strong>${quantity}</p>
        <p><strong>单价：</strong>¥${product.price}</p>
        <p><strong>总价：</strong>¥${totalPrice}</p>
    `;
    
    modal.style.display = 'block';
}

// 购物车页面初始化
function initCartPage() {
    loadCartFromStorage();
    renderCartItems();
    updateCartTotal();
    setupCartPage();
}

// 渲染购物车商品
function renderCartItems() {
    const cartItems = document.getElementById('cart-items');
    
    if (cart.length === 0) {
        cartItems.innerHTML = `
            <div class="empty-cart">
                <h3>购物车是空的</h3>
                <p>去<a href="index.html">首页</a>看看有什么好东西吧！</p>
            </div>
        `;
        return;
    }
    
    cartItems.innerHTML = cart.map((item, index) => {
        const specText = Object.entries(item.specs).map(([key, value]) => 
            `${getSpecLabel(key)}：${value}`
        ).join('，');
        
        return `
            <div class="cart-item">
                <img src="${item.image}" alt="${item.name}" class="cart-item-image">
                <div class="cart-item-info">
                    <h4 class="cart-item-title">${item.name}</h4>
                    <p class="cart-item-spec">${specText}</p>
                </div>
                <div class="cart-item-price">¥${item.price}</div>
                <div class="quantity-controls">
                    <button class="quantity-btn" onclick="changeQuantity(${index}, -1)">-</button>
                    <input type="number" class="quantity-input" value="${item.quantity}" 
                           onchange="updateQuantity(${index}, this.value)" min="1">
                    <button class="quantity-btn" onclick="changeQuantity(${index}, 1)">+</button>
                </div>
                <div class="cart-item-total">¥${item.price * item.quantity}</div>
                <button class="remove-btn" onclick="removeFromCart(${index})">删除</button>
            </div>
        `;
    }).join('');
}

// 设置购物车页面事件
function setupCartPage() {
    const checkoutBtn = document.getElementById('checkout-btn');
    
    checkoutBtn.addEventListener('click', function() {
        if (cart.length === 0) {
            alert('购物车是空的！');
            return;
        }
        
        const total = cart.reduce((sum, item) => sum + (item.price * item.quantity), 0);
        if (confirm(`确认结算吗？总金额：¥${total}`)) {
            alert('结算成功！感谢您的购买！');
            cart = [];
            updateCartCount();
            renderCartItems();
            updateCartTotal();
        }
    });
}

// 修改商品数量
function changeQuantity(index, change) {
    const newQuantity = cart[index].quantity + change;
    if (newQuantity > 0) {
        cart[index].quantity = newQuantity;
        updateCartCount();
        renderCartItems();
        updateCartTotal();
    }
}

// 更新商品数量
function updateQuantity(index, newQuantity) {
    const quantity = parseInt(newQuantity);
    if (quantity > 0) {
        cart[index].quantity = quantity;
        updateCartCount();
        renderCartItems();
        updateCartTotal();
    }
}

// 从购物车删除商品
function removeFromCart(index) {
    if (confirm('确定要删除这个商品吗？')) {
        cart.splice(index, 1);
        updateCartCount();
        renderCartItems();
        updateCartTotal();
    }
}

// 更新购物车数量显示
function updateCartCount() {
    const cartCountElements = document.querySelectorAll('#cart-count');
    const totalItems = cart.reduce((sum, item) => sum + item.quantity, 0);
    
    cartCountElements.forEach(element => {
        element.textContent = totalItems;
    });
}

// 更新购物车总价
function updateCartTotal() {
    const totalPriceElement = document.getElementById('total-price');
    if (totalPriceElement) {
        const total = cart.reduce((sum, item) => sum + (item.price * item.quantity), 0);
        totalPriceElement.textContent = total;
    }
}

// 工具函数：从localStorage获取购物车数据
function loadCartFromStorage() {
    const savedCart = localStorage.getItem('shopping-cart');
    if (savedCart) {
        cart = JSON.parse(savedCart);
    }
}

// 工具函数：保存购物车数据到localStorage
function saveCartToStorage() {
    localStorage.setItem('shopping-cart', JSON.stringify(cart));
}

// 页面关闭前保存购物车数据
window.addEventListener('beforeunload', function() {
    saveCartToStorage();
});

// 页面加载时读取购物车数据
window.addEventListener('load', function() {
    loadCartFromStorage();
    updateCartCount();
});