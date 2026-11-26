function calculate() {
    const quantity = Number(document.getElementById("quantity").value);
    if (!Number.isInteger(quantity) || quantity < 1) {
        document.getElementById("total").textContent = "Введите количество от 1";
        return;
    }
    document.getElementById("total").textContent = "Итого: " + quantity * 150 + " руб.";
}
