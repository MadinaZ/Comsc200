//
//  GradedActivity.h
//  As04
//
//  Created by Madina Sadirmekova on 3/2/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

// GradedActivity class declaration

class GradedActivity
{
private:
    int score;   // To hold the numeric score
public:
    // Default constructor
    GradedActivity()
    { score = 0.0; }
    
    // Constructor
    GradedActivity(int s)
    { score = s; }
    
    // Mutator function
    void setScore(int s)
    { score = s; }
    
    // Accessor functions
    int getScore() const
    { return score; }
    
    char getLetterGrade() const;
};
char GradedActivity::getLetterGrade() const
{
    char letterGrade; // To hold the letter grade
//    *Essay grading policy: A >= 85 > B >= 70 > C >= 0
    if (score >= 85)
        letterGrade = 'A';
    else if (score >= 70 && score < 85)
        letterGrade = 'B';
    else if (score >= 0 && score < 70)
        letterGrade = 'C';
    
    return letterGrade;
}
#endif
