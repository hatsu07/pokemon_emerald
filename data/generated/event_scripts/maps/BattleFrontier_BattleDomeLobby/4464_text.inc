	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:682 BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_227E6C
gText_Rom_227E6C: @ 0x08227E6C
	.string "トーナメントの しあいで\nおなじターンで どうじに たおれて\lダブルノックアウトに なった ときは\lしあいを みていた しんぱんだんに よる\lはんていで しょうしゃを けってい します{EOS}"
	.if (. - gText_Rom_227E6C) != 0x5d
	.error "gText_Rom_227E6C must retain its original byte length"
	.endif
