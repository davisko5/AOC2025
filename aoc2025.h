#ifndef AOC2_25_H
#define AOC2_25_H

#include <QStringList>

class AOC2025
{
public:
    int day1part1(int start, int count, QStringList &codes);
    int day1part2(int start, int count, QStringList &codes);
    qint64 day2part1(QStringList &ids);
    qint64 day2part2(QStringList &ids);
    qint64 day3part1(QStringList &banks);
    qint64 day3part2(QStringList &banks);
    QString mSingleJoltage;
    AOC2025();
private:
    void findLargestDigit(QString &b, int firstPos);
};

#endif // AOC2_25_H
