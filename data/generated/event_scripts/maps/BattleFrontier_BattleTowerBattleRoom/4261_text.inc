	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:535 BattleFrontier_BattleTowerBattleRoom_Text_AnabelYouCameBack
	.globl gText_Rom_222665
gText_Rom_222665: @ 0x08222665
	.string "リラ『ほんとに きて くれたんだね……\p…… …… …… ……\pここまで かちぬいた あなた……\n…… あなたが あいて だったら\lぼくも てかげん せずに たたかえる……\pひさしぶり……\pなんにも かんがえずに\nたたかう ことが できる なんて……{EOS}"
	.if (. - gText_Rom_222665) > 0x7e
	.error "gText_Rom_222665 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222665) < 0x7e
	.space 0x7e - (. - gText_Rom_222665)
	.endif
