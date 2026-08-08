	@ data/maps/TrainerHill_Entrance/scripts.inc:329 TrainerHill_Entrance_Text_ExplainTrainerHill
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23BC28
gText_Rom_23BC28: @ 0x0823BC28
	.string "ここ トレーナーヒルでは\nタイムアタックという きょうぎが\lおこなわれます\pはやい じかんは タイムボードに\nのりますので ともだちと じかんを\lくらべて みてください\pうけつけから おくじょうにいる\nオーナーに はなしかけるまでの\lじかんが はかられます\pまた トレーナーとの しょうぶで\nかっても けいけんちや おかねの\lやりとりは おこなわれません"
	.byte EOS
	.if (. - gText_Rom_23BC28) != 0xb2
	.error "gText_Rom_23BC28 must retain its original byte length"
	.endif
