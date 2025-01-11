#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int m, n, type, energy;
    cin >> n >> m;

    queue<int> que;
    vector<int> v(m, 1);  // เริ่มต้นพลังงานของทุกประเภทเป็น 1
    map<int, int> totalpoint;  // เก็บจำนวนประเภทที่มีค่าพลังงานแต่ละค่า
    totalpoint[1] = m;  // เริ่มต้นทุกประเภทมีพลังงาน 1 และมี m ตัว

    // รับค่าพลังงานลงในคิว
    for (int i = 0; i < n; i++) {
        cin >> energy;
        que.push(energy);
    }

    // อัปเดตค่าพลังงานตามประเภท
    for (int i = 0; i < n; i++) {
        cin >> type;
        energy = que.front();
        que.pop();

        if (energy > v[type]) {
            // อัปเดตแผนที่ totalpoint
            totalpoint[v[type]]--;  // ลดจำนวนประเภทที่มีพลังงานเดิม
            if (totalpoint[v[type]] == 0) {
                totalpoint.erase(v[type]);  // ลบค่าพลังงานนั้นออกจากแผนที่หากไม่มีประเภทที่เหลืออยู่
            }

            v[type] = energy;  // อัปเดตพลังงานใหม่
            totalpoint[energy]++;  // เพิ่มจำนวนประเภทที่มีพลังงานใหม่
        }

        // แสดงค่าพลังงานต่ำสุดที่มีอยู่ในแผนที่
        cout << totalpoint.begin()->first << " ";  // แผนที่เรียงตามคีย์อยู่แล้ว ค่าแรกคือพลังงานต่ำสุด
    }

    cout << "\n";
    return 0;
}
