	@ data/maps/LilycoveCity/scripts.inc:529 LilycoveCity_Text_BrendanYouGoingToBattleFrontier
	.globl gText_Rom_1E0BC3
gText_Rom_1E0BC3: @ 0x081E0BC3
	.string "{PLAYER}は どうする?\pバトルフロンティアに ちょうせん する?\nそれとも ずかんを かんせい させる?\pそんなに つよいんだから\nバトルフロンティアに ちょうせん するか?\pオレだって もうちょっと\nポケモン そだてれば {PLAYER}よりも\lつよくなれる はずだからな\lバトルフロンティアに いってみようかな?\pまあ いいや\nとにかく がんばれよ!$"
	.if (. - gText_Rom_1E0BC3) > 0xaa
	.error "gText_Rom_1E0BC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0BC3) < 0xaa
	.space 0xaa - (. - gText_Rom_1E0BC3)
	.endif
