/* Automatically generated from impl/SVGPointListImpl.cc using ../../kdelibs/kjs/create_hash_table. DO NOT EDIT ! */

using namespace KJS;

namespace KSVG {

static const char SVGPointListImpl__s_hashTableStrings[] = {
    "\0"
    "numberOfItems\0"
};


static const struct HashEntry SVGPointListImpl__s_hashTableEntries[] = {
   { 1, SVGListDefs::NumberOfItems, DontDelete|ReadOnly, 0, -1 },
   { 0, 0, 0, 0, -1 }
};

const struct HashTable SVGPointListImpl::s_hashTable = { 2, 2, SVGPointListImpl__s_hashTableEntries, 2, SVGPointListImpl__s_hashTableStrings};

} // namespace

using namespace KJS;

namespace KSVG {

static const char SVGPointListImplProto__s_hashTableStrings[] = {
    "\0"
    "insertItemBefore\0"
    "replaceItem\0"
    "appendItem\0"
    "initialize\0"
    "removeItem\0"
    "getItem\0"
    "clear\0"
};


static const struct HashEntry SVGPointListImplProto__s_hashTableEntries[] = {
   { 0, 0, 0, 0, -1 },
   { 0, 0, 0, 0, -1 },
   { 71, SVGListDefs::Clear, DontDelete|Function, 0, -1 },
   { 0, 0, 0, 0, -1 },
   { 63, SVGListDefs::GetItem, DontDelete|Function, 1, -1 },
   { 1, SVGListDefs::InsertItemBefore, DontDelete|Function, 2, -1 },
   { 0, 0, 0, 0, -1 },
   { 41, SVGListDefs::Initialize, DontDelete|Function, 1, -1 },
   { 52, SVGListDefs::RemoveItem, DontDelete|Function, 1, 11 },
   { 18, SVGListDefs::ReplaceItem, DontDelete|Function, 2, -1 },
   { 0, 0, 0, 0, -1 },
   { 30, SVGListDefs::AppendItem, DontDelete|Function, 1, -1 }
};

const struct HashTable SVGPointListImplProto::s_hashTable = { 2, 12, SVGPointListImplProto__s_hashTableEntries, 11, SVGPointListImplProto__s_hashTableStrings};

} // namespace
