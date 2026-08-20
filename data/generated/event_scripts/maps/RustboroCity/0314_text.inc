	@ data/maps/RustboroCity/scripts.inc:1267 RustboroCity_Text_AddedMatchCallPleaseCallMrStone
	.globl gText_Rom_1DFC6A
gText_Rom_1DFC6A: @ 0x081DFC6A
	.string "はい! {PLAYER}さんの ポケナビに\nエントリーコール という きのうを\lついか しました!\pポケナビに とうろく されていれば\nとおく はなれた ところの ひとと\lエントリーコールを つうじて\lかいわが できて しまうんです!\p{PLAYER}さんの ポケナビには\nうちの ツワブキ しゃちょうの なまえが\lとうろく してある はずです\pためしに ちょっと しゃちょうを\nよびだして みてください!{EOS}"
	.if (. - gText_Rom_1DFC6A) > 0xc0
	.error "gText_Rom_1DFC6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFC6A) < 0xc0
	.space 0xc0 - (. - gText_Rom_1DFC6A)
	.endif
