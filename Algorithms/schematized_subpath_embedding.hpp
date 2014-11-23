#ifndef SCHEMATIZED_SUBPATH_EMBEDDING_H_
#define SCHEMATIZED_SUBPATH_EMBEDDING_H_

#include <vector>

#include "../DataStructures/SymbolicCoordinate.h"
#include "../DataStructures/SchematizedPlane.h"
#include "../DataStructures/SubPath.h"

/**
 * This class joins schematized subpaths to one big schematized path.
 */
class SchematizedSubPathEmbedding
{
public:
    SchematizedSubPathEmbedding(const SchematizedPlane& plane);

    void embedd(std::vector<SubPath>& subpaths, std::vector<SymbolicCoordinate>& mergedPath) const;

private:
    void computeDeltas(std::vector<SubPath>& subpaths) const;

    void mergeSubpaths(const std::vector<SubPath>& subpaths, std::vector<SymbolicCoordinate>& mergedPath) const;

    const SchematizedPlane& plane;
};

#endif
