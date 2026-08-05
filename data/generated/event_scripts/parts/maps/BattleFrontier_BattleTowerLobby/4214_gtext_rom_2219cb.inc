	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1153 BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2219CB
gText_Rom_2219CB: @ 0x082219CB
	.string "バトルサロンは マルチバトルで\nタッグを くむ あいてを さがす へやです\pトレーナーの ポケモンや わざなどを みて\nベストな あいてを えらびましょう\pまた タッグを くむ あいては\n7れんしょう ごとに えらび なおします"
	.byte EOS
	.if (. - gText_Rom_2219CB) != 0x73
	.error "gText_Rom_2219CB must retain its original byte length"
	.endif
