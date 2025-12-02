#include "aoc2025.h"
#include <qdebug>

int AOC2025::day1part1(int start, int count, QStringList &codes)
{
    for (QString &c : codes) {
        if (c.contains('L')) {
            QString numbOnly = c.remove('L');
            int numb = numbOnly.toInt();
            start -= numb;
        }
        if (c.contains('R')) {
            QString numbOnly = c.remove('R');
            int numb = numbOnly.toInt();
            start += numb;
        }

        if (start >= 100) {
            start = start % 100;
        }

        else if (start < 0) {
            start = start % 100;
        }

        if (start == 0) {
            count++;
        }


    }

   return count;

}

int AOC2025::day1part2(int start, int count, QStringList &codes)
{

    for (QString &c : codes) {
        bool ok = false;
        if (c.contains('L')) {
            QString numbOnly = c.remove('L');
            int numb = numbOnly.toInt();
            if (start == 0)
                ok = true;
            start -= numb;

        }
        if (c.contains('R')) {
            QString numbOnly = c.remove('R');
            int numb = numbOnly.toInt();
            if (start == 0)
                ok = true;
            start += numb;

        }

        if (start > 99) {
            int timesOver99 = start / 100;
            start = start % 100;
            count += timesOver99;
            if (start == 0) {
                continue;
            }

        }
        if (start < 0) {
            int timesOver99 = start / 100;
            if (start % 100 == 0)
                start = 0;
            else
                start = 100 + (start % 100);
            if (ok)
                count -= timesOver99;
            else
                count -= timesOver99 - 1;
            if (start == 0) {
                continue;
            }
        }

        if (start == 0) {
            count++;
        }


    }

    return count;

}

qint64 AOC2025::day2part1(QStringList &ids)
{
    struct Id {
        qint64 first;
        qint64 second;
    };
    qint64 sum = 0;

    for (QString &i : ids) {
        Id fullID;
        auto lists = i.split("-");
        fullID.first = lists.at(0).toLongLong();
        fullID.second = lists.at(1).toLongLong();


        for (fullID.first; fullID.first <= fullID.second; fullID.first++) {

            QString fullString = QString::number(fullID.first);
            QString part1 = fullString.mid(0, fullString.length() / 2);
            QString part2 = fullString.mid(fullString.length() / 2);



            if (part1 == part2) {
                sum += fullID.first;
            }



        }




    }
    return sum;



}

AOC2025::AOC2025() {


}
