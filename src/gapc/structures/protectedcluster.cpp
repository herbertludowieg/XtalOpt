/**********************************************************************
  ProtectedCluster - Contains a cluster with protecting ligands

  Copyright (C) 2010-2011 by David C. Lonie

  This source code is released under the New BSD License, (the "License").

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 ***********************************************************************/

#include <gapc/structures/protectedcluster.h>

namespace GAPC {

ProtectedCluster::ProtectedCluster(QObject* parent) : Cluster(parent)
{
}

ProtectedCluster::~ProtectedCluster()
{
}
}
