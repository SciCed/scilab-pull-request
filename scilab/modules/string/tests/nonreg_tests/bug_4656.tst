// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2009 - DIGITEO - Pierre MARECHAL
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================

// <-- CLI SHELL MODE -->

// <-- Non-regression test for bug 4656 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/show_bug.cgi?id=4656
//
// <-- Short Description -->
// Change of behavior from 4.1.2 to 5.1.1 of the expression:
// size(part(string(1:3),[])) = 1 1

A = ["abcdef" "ghijkl" "mnopqr"];

if or(size(part(A,[])) <> [1 3]) then pause, end
if or(part(A,[])<>["" "" ""]) then pause, end

if or(size(part(string(1:3),[])) <> [1 3]) then pause, end
if or(part(string(1:3),[])<>["" "" ""]) then pause, end
