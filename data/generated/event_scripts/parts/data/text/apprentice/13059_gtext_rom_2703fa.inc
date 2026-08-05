	@ data/text/apprentice.inc:505 gText_ApprenticeWhichMonFirst4
	.globl gText_Rom_2703FA
gText_Rom_2703FA: @ 0x082703FA
	.string "{PLAYER}{KUN}! わたしよ\nよかったわ こまっていたの!\pちょっと ポケモンの じゅんばんを\nきめて もらえる かしら!\lと いっても そうねえ\lとりあえず 1ばんめの ポケモンで いいわ\lどの ポケモンに したら いいかしら?"
	.byte EOS
	.if (. - gText_Rom_2703FA) > 0x70
	.error "gText_Rom_2703FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2703FA) < 0x70
	.space 0x70 - (. - gText_Rom_2703FA)
	.endif
