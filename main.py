# prime_check.py
# 功能：判断一个整数是否为质数（素数）

def is_prime(n: int) -> bool:
    """判断一个整数是否为质数"""
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    # 检查到 sqrt(n) 即可
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True


if __name__ == "__main__":
    try:
        # 获取用户输入
        user_input = input("请输入一个整数：").strip()
        number = int(user_input)  # 转换为整数

        # 判断并输出结果
        if is_prime(number):
            print(f"{number} 是质数（素数）✅")
        else:
            print(f"{number} 不是质数 ❌")

    except ValueError:
        print("输入无效，请输入一个整数！")
