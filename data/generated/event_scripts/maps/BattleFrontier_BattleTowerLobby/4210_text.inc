	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1147 BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules
	.globl gText_Rom_2218DD
gText_Rom_2218DD: @ 0x082218DD
	.string "バトルタワーは\nシングルバトル ダブルバトル マルチバトル\lつうしんマルチバトル というように\l4つの たたかいが\lおこなわれる しせつです\pそれぞれの たたかい ごとに\nバトルルームと よばれる\lたいせんの へやが ようい されています\pちょうせん したい たたかいの うけつけに\nはなしかけて いどみましょう"
	.byte EOS
	.if (. - gText_Rom_2218DD) > 0x9d
	.error "gText_Rom_2218DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2218DD) < 0x9d
	.space 0x9d - (. - gText_Rom_2218DD)
	.endif
