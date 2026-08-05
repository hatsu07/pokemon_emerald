	@ data/text/match_call.inc:748 MatchCall_Text_May7
	.globl gText_Rom_26AEA2
gText_Rom_26AEA2: @ 0x0826AEA2
	.string "ハルカ『{PLAYER}{KUN} やっほー!\pあたしは いま\n119ばんどうろに きているの!\pこのあたりは おおきな かわが あるし\nあめも しょっちゅう ふってるから\lずぶぬれに なっちゃったよ!"
	.byte EOS
	.if (. - gText_Rom_26AEA2) > 0x5d
	.error "gText_Rom_26AEA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AEA2) < 0x5d
	.space 0x5d - (. - gText_Rom_26AEA2)
	.endif
