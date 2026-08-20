	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:321 BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome
	.globl gText_Rom_223282
gText_Rom_223282: @ 0x08223282
	.string "ぁあん やっぱ ダーリンは ス テ キ!\p…… ……あー!\nもー! わたし たまんないっ!!\pいますぐ ふたりで マルチ バトルルームに\nとつげき しましょうよーっ!!\pバトルサロンで いっしょに なったら\nふたりの ラブパワーで\lどいつも こいつも ギタギタよ!\lねぇー ダーリン!!{EOS}"
	.if (. - gText_Rom_223282) > 0x90
	.error "gText_Rom_223282 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223282) < 0x90
	.space 0x90 - (. - gText_Rom_223282)
	.endif
