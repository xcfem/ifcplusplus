/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCartesianPointList3D.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcCartesianPointList3D 
IfcCartesianPointList3D::IfcCartesianPointList3D( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcCartesianPointList3D::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCartesianPointList3D> copy_self( new IfcCartesianPointList3D() );
	copy_self->m_CoordList.resize( m_CoordList.size() );
	for( size_t ii=0; ii<m_CoordList.size(); ++ii )
	{
		std::vector<shared_ptr<IfcLengthMeasure> >& vec_ii = m_CoordList[ii];
		std::vector<shared_ptr<IfcLengthMeasure> >& vec_ii_target = copy_self->m_CoordList[ii];
		for( size_t jj=0; jj<vec_ii.size(); ++jj )
		{
			shared_ptr<IfcLengthMeasure>& item_jj = vec_ii[jj];
			if( item_jj )
			{
				vec_ii_target.emplace_back( dynamic_pointer_cast<IfcLengthMeasure>( item_jj->getDeepCopy(options) ) );
			}
		}
	}
	return copy_self;
}
void IfcCartesianPointList3D::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCCARTESIANPOINTLIST3D" << "(";
	writeTypeOfRealList2D( stream, m_CoordList );
	stream << ");";
}
void IfcCartesianPointList3D::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcCartesianPointList3D::toString() const { return L"IfcCartesianPointList3D"; }
void IfcCartesianPointList3D::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCartesianPointList3D, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readTypeOfRealList2D( args[0], m_CoordList );
}
void IfcCartesianPointList3D::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcCartesianPointList::getAttributes( vec_attributes );
}
void IfcCartesianPointList3D::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcCartesianPointList::getAttributesInverse( vec_attributes_inverse );
}
void IfcCartesianPointList3D::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcCartesianPointList::setInverseCounterparts( ptr_self_entity );
}
void IfcCartesianPointList3D::unlinkFromInverseCounterparts()
{
	IfcCartesianPointList::unlinkFromInverseCounterparts();
}
