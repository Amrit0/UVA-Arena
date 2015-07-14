#pragma once

#include "arenatablemodel.h"
#include "Uhunt/uhunt.h"

namespace uva
{

    class UVA_EXPORT ProblemsTableModel : public ArenaTableModel
    {
    public:

        ProblemsTableModel();

        void setUhuntProblemMap(std::shared_ptr<Uhunt::ProblemMap> problemMap);

    protected:

        virtual int getDataCount() const;

        virtual QVariant getDataAtIndex(const QModelIndex &index) const;

    private:

        QList<int> mRowToNumber;
        std::shared_ptr<Uhunt::ProblemMap> mProblemMap;

    };
}
