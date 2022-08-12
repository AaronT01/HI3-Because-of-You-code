/* # means too blurry and distorted to read */

/* From 1:13 to 1:18 */
GRESULT IDS::BlockMaliciousActivities(GDataSet *target){
	GRESULT gr;
		if ( !target || CurrentPos(target) == NULL)
			return EXCEED_BOUNDARY;
			
	SCAN_THREAD_PARAM *scanParam = new SCAN_THREAD_PARAM
		if (scanParam == NULL) return NOT_VALID_STATE;
		
	scanParam->captureEvent = CreateEvent(g_CAPTURE, TRUE, TRUE, NULL)
		if (scanParam->captureEvent == NULL)
			gr = GLOBAL_SEARCH(LocateLastPos(target));
			delete scanParam;
			return gr;
			
	scanParam->threadHandle = CreateThread
	(NULL, 0, &IDS::ScanThread, scanParam, FLAG_BLOCKING);
		if (scanParam->threadHandle == NULL){
			gr = GLOBAL_SEARCH(LocateLastPos(target));
			BlockHandle(scanParam->captureEvent);
			delete scanParam;
			return gr;
		}
	scanParam->###murate = NULL;
	scanParam->instance = this;
	LockOnTarget(&target);
	ResumeThread(scanParam->threadHandle);
	
		return SUCCESS;
}
	
/* From 1:22 to 1:25 */
GRESULT IPS::DefenseAgainstMalAttacks(GDataSet *target) {
	SetDefenseLevel(DEFENSE_LEVEL_10, true, kGlobal);
	if (m_ObjExists(&target))
		AnalysePerformance(target);	
	
	if (g_IDS->isMalwareDetected){
		g_IDS->ScanForComponents();
		g_AVDB->VerifySignature(target);
		if (g_AVDB->IsContain(target))
			g_AVDB->UpdateToDatabase(target);
		bool m_flags = EXECUTE_FLAG(g_BindFlags, tElimination);
		
		if (m_flags){
			FlagsAndAttributes |= tAttrIsolate;
			m_handle = CreateEvent(m_flags, DesiredAcess, ExecuteMode, NULL,
			CreationDisposition,
			FlagsAndAttributes, NULL);
			if (m_handle == INVALID_HANDLE_VALUE)
				gr = GLOBAL_SEARCH(LocateLastPos(target));
			g_Operator->Add(target);
			g_Operator->SetTargetHandle((void*)m_handle);}
		
		else{
				return NOT_VALID_STATE;}
				
		return SUCCESS;
	}
}

/* From 1:52 to 1:55 */
GRESULT IPS::RemoveDependencies(GDataSet *target, ULONG const flags){
	if ( !target || CurrentPos(target) == NULL)
		return EXCEED_BOUNDARY;
	GCOORD pos;
	
	if (g_tAttr){
		g_tAttr->GetLocation(&pos);}
	g_BindFlags = 0;
	
	DWORD DesiredAcess = 0, ExecuteMode = 0, FlagsAndAttributes = 0;
	
	g_BindFlags = flags
	gr = SUCCESS;
	if (g_BindFlags > 0){
		DesiredAcess |= EXECUTE_FLAG;
		(g_BindFlags, fsRead) ? GENERIC_READ : 0;
		DesiredAcess |= EXECUTE_FLAG;
		(g_BindFlags, fsWrite) ? GENERIC_WRITE : 0;
		
		ExecuteMode |= EXECUTE_FLAG;
		(g_BindFlags, tExecuteForce) ? EXECUTE_FORCE_MODE : 0;
		ExecuteMode |= EXECUTE_FLAG;
		(g_BindFlags, tExecuteCondition) ? EXECUTE_UNCONDITIONALLY : 0;
		ExecuteMode |= EXECUTE_FLAG;
		(g_BindFlags, tExecuteDelete) ? EXECUTE_DELETE_MODE : 0;	// either MODE or VALID
		ExecuteMode |= EXECUTE_FLAG;
		(g_BindFlags, tExecuteTime) ? EXECUTE_DELETE_NOW : 0;
		
		FlagsAndAttributes |= EXECUTE_FLAG;
		(g_BindFlags, tAttrNormal) ? OBJECT_ATTRIBUTE_NORMAL : 0;
		FlagsAndAttributes |= EXECUTE_FLAG;
		(g_BindFlags, tAttrHeadOnly) ? OBJECT_ATTRIBUTE_VALID : 0;
		FlagsAndAttributes |= EXECUTE_FLAG;
		(g_BindFlags, tAttrSystem) ? OBJECT_ATTRIBUTE_SYSTEM : 0;
		FlagsAndAttributes |= EXECUTE_FLAG;
		(g_BindFlags, tAttrHidden) ? OBJECT_ATTRIBUTE_HIDDEN : 0;
		FlagsAndAttributes |= EXECUTE_FLAG;
		(g_BindFlags, tAttrPersistent) ? OBJECT_ATTRIBUTE_PERSISTENT : 0;}
		
	BreakRelatives(pos, DesiredAcess, ExecuteMode, FlagsAndAttributes);
	m_arr = (ULONG)(gr % 0xffff);
	return gr;
}

/* From 1:55 to 1:56 */
GRESULT IPS::EliminateOnActive(GDataSet *target) {
	if ( !target || CurrentPos(target) == NULL)
		return EXCEED_BOUNDARY;
	
	if (EXECUTE_FLAG(g_BindFlags, tExecNow)){
		ExecAttr |= EXEC_NOW;}
	else if (EXECUTE_FLAG(g_BindFlags, tExecPersistent)){
		ExecAttr |= EXEC_PERSISTENT;}
	else if (EXECUTE_FLAG(g_BindFlags, tExec#####)){
		ExecAttr |= EXEC_#####;}
	else if (EXECUTE_FLAG(g_BindFlags, tExecExisting)){
		ExecAttr |= EXEC_EXISTING;}
	else{
		return G_INVALIDARG;}
		
	while (g_IDS.IsActive(target)){
		g_Operator->AddSchema("ELIMINATE");
		g_Operator->Add(&target);
		g_Operator->Execute();}
	RestructuringResources();
	
	return SUCCESS;
}

/* From 2:14 to 2:25 */
GRESULT IDS::RevokeElysianRealmAuthority(GDataSet *target){?
	GDS *conn;
	conn = RealConnect(g_cfg.server, g_cfg.user, g_cfg.pw);
	if (!conn){
		return CONNECTION_FAILED;}
	else{?
		char buffer[100];
		sprintf(buffer,
		"REVOKE ElysianRealm ON "," FROM '%s'@'%'",
		"Elysia");
		cmd = new SrvCommand(buffer, conn);
		result = cmd.Execute();
		if (!result){
			return REVOKE_FAILED;}?}
	return SUCCESS;
}
g_IDS->RevokeElysianRealmAuthority(Elysia);

GRESULT IDS::EraseHumanitySimulation(GDataSet *target){?
	GetSimData(target->id,
	m_rows,
	m_id,
	m_max,
	kGlobal);
	for (size_t j = 0; j < m_data.size(); j++) {
		for (size_t k = cur_row + 1; k < m_rows; k++) {
			val = val * m_data[j][k];}}?
	g_Operator->AddSchema("UNIT_ERASE");
	g_Operator->AnalyseSimUnits(&target, val);
	g_Operator->Execute();
	return SUCCESS;
}
g_IDS->EraseHumanitySimulation(Elysia);

GRESULT IDS::EraseMemoryOfTheMOTHs(GDataSet *target){??
	size_t cur_row = 0;
	double val = 1.0;
	size_t cur_index = 0;
	for (size_t i = 0; i < m_rows; i++) {
		double m_max = m_data[cur_index][cur_row];
		for (size_t j = cur_row + 1; j < m_rows; j++) {
			if (m_data[cur_index][j] > m_max) {
				m_max = m_data[cur_index][j];}}
		if (i != m_id) {
			val = val * m_data[cur_index][cur_row];
			cur_index++;}}
	g_Operator->AddSchema("UNIT_ERASE")
	g_Operator->AnalyseMemUnits(&target, val);
	g_Operator->Execute();
	return SUCCESS;
}
g_IDS->EraseMemoryOfTheMOTHs(Elysia);

GRESULT IDS::DeleteEternalReturn(GDataSet *target){
	GStatus status;
	GMedic medic(target);
	GDependencyRes resIt;
	DESTROY_CONTEXT(target->context);
	GMessage::removeCallbacks(callbackIds);
	CHECK_GSTATUS(medic.dereg(target->id));
	CHECK_GSTATUS(medic.deregrCommand("EternalReturn"));
	for (resIt.reset(Gloop:m_productionMode);
		!resIt.isDone();
		resIt.next()){
		GObject pNode = resIt.item();
		GDependencyRes resNode(pNode);
		if (m_IdExists(resNode.typeId())){
			ProReset(resNode.typeId());}}
	return SUCCESS;
}
g_IDS->DeleteEternalReturn(Elysia);



/**
99%
100%


再见了
「愛莉希雅」



DELETE COMPLETED
*/



/**
「抱歉......」
「得让你失望啦」
*/

/* From 2:52 to 2:53 */
GRESULT RestoreEgo()
{
	GUNIT dim;
	vector<GDATA>data_uint;
	vector<GDATA>cache;
	g_DB->RecoverNgin->Initialize();
	g_DB->Rollback();
	for (int i = 0; i < sizeof(m_dim); i++) {
		dim = m_dim.pop_back();
		data_uint.pushback(GetDataFromDim(dim));
	}
	block_size = max(1024 * 1024, GetSize(data_uint) / 1000);
	for (GUNIT unit = cache.begin();
		unit != cache.end();
		unit++)
	{
		GetCurrentPos();
		while (g_cursor < GetEndOf(*unit) - block_size - 4) {
			block_index = GetByteData(*unit, 4);
			block_index %= (block_size / 1024);
			if (Seek(g_cursor + block_size * 1024)) {
				data_uint.push_back(GetByteData(*unit, 1024));
			} else {
				return SEEK_FAILED;
			}
		}
		int min_size;
		min_size = min(GetEndOf(*unit) - g_cursor, 1024 * 10);
		data_uint.push_back(GetByteData(min_size));
	}
	Concat(data_uint);
	return SUCCESS;
}

/* 2:54 and 3:00 */
GRESULT RestorePurePinkHeart()
{
	GParameter* parameter;
	g_DB->GetRecord(parameter="Elysia", #########
	while (parameter#)
	{
		parameter###########################################
		parameter################
		#####################
}