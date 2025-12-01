#include "aoc2025.h"

#include <QDebug>
#include <QFile>

int main(int argc, char *argv[])
{
    int start = 50;
    int count = 0;
    QStringList codes;


    QFile inputFile("/home/david/Projects/AOC2025/input.txt");
    if (inputFile.open(QIODevice::ReadOnly))
    {
        QTextStream in(&inputFile);
        while (!in.atEnd())
        {
            QString line = in.readLine();
             codes.append(line);
        }
        inputFile.close();
    }

   // codes = {"L68", "L30", "R48", "L5", "R60", "L55", "L1", "L99", "R14", "L82"};


    AOC2025 aoc;
    qDebug() << aoc.part2(start, count, codes);

    int test = 100 + (0 % 100);
    qDebug() << test;



}


