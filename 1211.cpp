* {
    padding: 0;
    margin: 0;
    box-sizing: border-box; 
}


header {
    background-color: #474745;
    height: 80px;
    width: 100%;
    position: relative;
}

h1 {
    color: white;
    position: absolute;
    left: 100px;
    top: 0;
    line-height: 80px;
    background-repeat: no-repeat;
    background-position: center;
}

header ul {
    position: absolute;
    right: 5vw;
    top: 0;
    line-height: 80px;
}

header li {
    display: inline;
    margin-right: 4vw;
}

header a {
    color: white;
    text-decoration: none;
}

header a:hover {
    text-decoration: underline;
}

.news {
    background-color: rgb(238, 209, 172);
    color: white;
    height: 85vh;
    background-image: url("image/2.png");
    background-repeat: no-repeat;
    background-size: cover;
    background-position: center;
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: center;
}

.news h2 {
    font-size: 60px;
}

.news p {
    color: #FEF7E6;
    font-size: 18px;
    margin: 26px 0;
}

.news a {
    color: white;
    text-decoration: none;
    border: 1px solid #FEF7E6;
    padding: 10px 20px;
    border-radius: 7px;
}




.shop {
    display: flex;
    justify-content: space-evenly;
}

.shop img {
    width: 47%;
    
}



.info {

    background-color: #ffffff; 
    
 
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: center;
    
    
    padding: 30px 40px; 
    border-radius: 5px;
    
    
    box-shadow: 0 4px 10px rgba(0, 0, 0, 0.05); 
    
    
    text-align: center;
}

.info h2 {

    font-size: 44px; 
    font-weight: 700; 
    color: #474745; 
    
    
    border-bottom: 4px solid #d56838; 
    padding-bottom: 10px;
    margin-bottom: 25px; 
    line-height: 1.2em; 
    
    
    animation: pulse 2s infinite; 
}

.info p {
    font-size: 16px;
    color: #7a908a; 
    line-height: 1.8em;
    max-width: 85%; 
    margin: 15px 0;
}

@keyframes pulse {
    0% {
        transform: scale(1);
        opacity: 1;
    }
    50% {
        transform: scale(1.02); 
        opacity: 0.9;
    }
    100% {
        transform: scale(1);
        opacity: 1;
    }
}

.product {
    display: flex;
    background-color: #ede9db;
    justify-content: space-between;
    align-items: center;
    padding: 100px 180px 80px;
}

.product div {
    width: 250px;
    text-align: center;
}

.product img {
    width: 100%;
    border-radius: 10px;
}

.product h3 {
    font-size: 20px;
    margin: 20px 0;
}

.product p {
    font-size: 14px;
    line-height: 1.6em;
}

.order {
    margin-top: 15px;
    padding: 12px 22px;
    background: #d56838;
    color: white;
    border: none;
    border-radius: 8px;
    cursor: pointer;
    font-size: 15px;
}

.order:hover {
    background: #b94f23;
}

footer {
    background-color: #000000;
    color: #b7b7b7;
    height: 60px;
    display: flex;
    justify-content: center;
    align-items: center;
    font-size: 14px;
}

#cart-container {
    position: fixed;
    top: 100px;
    right: 20px;
    width: 300px;
    background-color: #fff;
    border: 1px solid #ccc;
    border-radius: 10px;
    box-shadow: 0 4px 12px rgba(0, 0, 0, 0.15);
    padding: 20px;
    z-index: 1000;
    font-family: Arial, sans-serif;
}

#cart-container h2 {
    font-size: 22px;
    color: #333;
    margin-bottom: 15px;
    border-bottom: 2px solid #eee;
    padding-bottom: 8px;
}

#cart-items {
    list-style: none;
    padding: 0;
    margin: 0 0 15px 0;
}

#cart-items li {
    padding: 8px 0;
    font-size: 15px;
    color: #555;
    border-bottom: 1px dotted #ddd;
    display: flex;
    justify-content: space-between;
}

#cart-container p {
    font-size: 18px;
    font-weight: bold;
    color: #d56838;
    margin-bottom: 20px;
}

.cart-actions {
    display: flex;
    justify-content: space-between;
}

#checkout-btn {
    padding: 10px 15px;
    background: #d56838;
    color: white;
    border: none;
    border-radius: 6px;
    cursor: pointer;
    font-size: 16px;
    flex-grow: 1;
    margin-right: 10px;
}

#checkout-btn:hover {
    background: #b94f23;
}

#clear-cart-btn {
    padding: 10px 15px;
    background: #aaa;
    color: white;
    border: none;
    border-radius: 6px;
    cursor: pointer;
    font-size: 16px;
}

#clear-cart-btn:hover {
    background: #888;
}

.modal {
    display: none; 
    position: fixed; 
    z-index: 2000; 
    left: 0;
    top: 0;
    width: 100%; 
    height: 100%; 
    background-color: rgba(0,0,0,0.6); 
    justify-content: center;
    align-items: center;
}

.modal-content {
    background-color: #fefefe;
    padding: 25px;
    border: 1px solid #888;
    width: 90%; 
    max-width: 500px;
    border-radius: 8px;
    box-shadow: 0 5px 15px rgba(0,0,0,0.3);
    position: relative;
    animation: fadeIn 0.3s;
}

@keyframes fadeIn {
    from {opacity: 0; transform: translateY(-20px);}
    to {opacity: 1; transform: translateY(0);}
}

.close {
    color: #aaa;
    float: right;
    font-size: 28px;
    font-weight: bold;
    cursor: pointer;
}

.close:hover { color: black; }

.form-group { margin-bottom: 15px; }
.form-group label { display: block; margin-bottom: 5px; font-weight: bold; }
.form-group input, .form-group select {
    width: 100%;
    padding: 10px;
    box-sizing: border-box;
    border: 1px solid #ccc;
    border-radius: 4px;
    font-size: 16px;
}

.modal-footer {
    text-align: right;
    margin-top: 20px;
    border-top: 1px solid #eee;
    padding-top: 15px;
}

.btn-confirm {
    background-color: #28a745;
    color: white;
    padding: 12px 20px;
    border: none;
    border-radius: 5px;
    cursor: pointer;
    font-size: 16px;
    width: 100%;
}
.btn-confirm:hover { background-color: #218838; }

.order-summary-list {
    background: #f9f9f9;
    padding: 10px;
    border-radius: 5px;
    margin-bottom: 15px;
    max-height: 150px;
    overflow-y: auto;
}
.order-summary-list li {
    border-bottom: 1px dashed #ddd;
    padding: 5px 0;
    list-style: none;
    display: flex;
    justify-content: space-between;
}
