#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/*
  The following name(s) appear with different usages
  e.g., with different numbers of arguments:

    antsImageIterator

  This needs to be resolved in the tables and any declarations.
*/

/* FIXME:
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP antsImage(SEXP, SEXP, SEXP);
extern SEXP antsImage_asantsImage(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP antsImage_asVector(SEXP, SEXP, SEXP);
extern SEXP antsImage_dim(SEXP);
extern SEXP antsImage_GetDirection(SEXP);
extern SEXP antsImage_GetNeighborhood(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP antsImage_GetNeighborhoodMatrix(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP antsImage_GetOrigin(SEXP);
extern SEXP antsImage_GetPixels(SEXP, SEXP);
extern SEXP antsImage_GetSpacing(SEXP);
extern SEXP antsImage_isna(SEXP);
//extern SEXP antsImage_rm(SEXP);
//extern SEXP antsImage_RelationalOperators(SEXP, SEXP, SEXP, SEXP);
extern SEXP antsImage_SetDirection(SEXP, SEXP);
extern SEXP antsImage_SetOrigin(SEXP, SEXP);
extern SEXP antsImage_SetPixels(SEXP, SEXP, SEXP);
extern SEXP antsImage_SetRegion(SEXP, SEXP, SEXP, SEXP);
extern SEXP antsImage_SetSpacing(SEXP, SEXP);
extern SEXP antsImage_TransformIndexToPhysicalPoint(SEXP, SEXP);
extern SEXP antsImage_TransformPhysicalPointToIndex(SEXP, SEXP);
extern SEXP antsImageClone(SEXP, SEXP);
extern SEXP antsImageHeaderInfo(SEXP);
extern SEXP antsImage_SetByImage( SEXP, SEXP, SEXP );
extern SEXP antsImageRead(SEXP, SEXP, SEXP, SEXP);
extern SEXP antsImageWrite(SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"antsImage",                               (DL_FUNC) &antsImage,                                3},
    {"antsImage_asantsImage",                   (DL_FUNC) &antsImage_asantsImage,                    6},
    {"antsImage_asVector",                      (DL_FUNC) &antsImage_asVector,                       3},
    {"antsImage_dim",                           (DL_FUNC) &antsImage_dim,                            1},
    {"antsImage_GetDirection",                  (DL_FUNC) &antsImage_GetDirection,                   1},
    {"antsImage_GetNeighborhood",               (DL_FUNC) &antsImage_GetNeighborhood,                5},
    {"antsImage_GetNeighborhoodMatrix",         (DL_FUNC) &antsImage_GetNeighborhoodMatrix,          7},
    {"antsImage_GetOrigin",                     (DL_FUNC) &antsImage_GetOrigin,                      1},
    {"antsImage_GetPixels",                     (DL_FUNC) &antsImage_GetPixels,                      2},
    {"antsImage_GetSpacing",                    (DL_FUNC) &antsImage_GetSpacing,                     1},
    {"antsImage_isna",                          (DL_FUNC) &antsImage_isna,                           1},
    //{"antsImage_rm",                            (DL_FUNC) &antsImage_rm,                             1},
    // {"antsImage_RelationalOperators",           (DL_FUNC) &antsImage_RelationalOperators,            4},
    {"antsImage_SetDirection",                  (DL_FUNC) &antsImage_SetDirection,                   2},
    {"antsImage_SetOrigin",                     (DL_FUNC) &antsImage_SetOrigin,                      2},
    {"antsImage_SetPixels",                     (DL_FUNC) &antsImage_SetPixels,                      3},
    {"antsImage_SetRegion",                     (DL_FUNC) &antsImage_SetRegion,                      4},
    {"antsImage_SetSpacing",                    (DL_FUNC) &antsImage_SetSpacing,                     2},
    {"antsImage_TransformIndexToPhysicalPoint", (DL_FUNC) &antsImage_TransformIndexToPhysicalPoint,  2},
    {"antsImage_TransformPhysicalPointToIndex", (DL_FUNC) &antsImage_TransformPhysicalPointToIndex,  2},
    {"antsImageClone",                          (DL_FUNC) &antsImageClone,                           2},
    {"antsImageHeaderInfo",                     (DL_FUNC) &antsImageHeaderInfo,                      1},
    {"antsImage_SetByImage",                    (DL_FUNC) &antsImage_SetByImage,                     3},
    {"antsImageRead",                           (DL_FUNC) &antsImageRead,                            4},
    {"antsImageWrite",                          (DL_FUNC) &antsImageWrite,                           2},
    {NULL, NULL, 0}
};

void R_init_testANTsRCore(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
