	@ data/maps/TrainerHill_Entrance/scripts.inc:329 TrainerHill_Entrance_Text_ExplainTrainerHill
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23BC28
gText_Rom_23BC28: @ 0x0823BC28
	.string "ここ トレーナーヒルでは\nタイムアタックという きょうぎが\lおこなわれます\pはやい じかんは タイムボードに\nのりますので ともだちと じかんを\lくらべて みてください\pうけつけから おくじょうにいる\nオーナーに はなしかけるまでの\lじかんが はかられます\pまた トレーナーとの しょうぶで\nかっても けいけんちや おかねの\lやりとりは おこなわれません"
	.byte EOS
	.if (. - gText_Rom_23BC28) != 0xb2
	.error "gText_Rom_23BC28 must retain its original byte length"
	.endif
	.globl gText_Rom_23BCD6
	.set gText_Rom_23BCD6, gText_Rom_23BC28 + 0xae
	@ data/maps/TrainerHill_Entrance/scripts.inc:333 TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon
	.globl gText_Rom_23BCDA
gText_Rom_23BCDA: @ 0x0823BCDA
	.string "おや?\nてもちが 1ぴきしか いないようですね\pてもちを 2ひき いじょうに してから\nまたおこし くださいませ"
	.byte EOS
	.if (. - gText_Rom_23BCDA) > 0x39
	.error "gText_Rom_23BCDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BCDA) < 0x39
	.space 0x39 - (. - gText_Rom_23BCDA)
	.endif
