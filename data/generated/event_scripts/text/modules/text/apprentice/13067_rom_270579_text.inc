	@ data/text/apprentice.inc:517 gText_ApprenticeWhichMonFirst6
	.globl gText_Rom_270579
gText_Rom_270579: @ 0x08270579
	.string "ヤッホー ハーイ {PLAYER}さーん\nいつも つよそうな かおで あるいてるわね\pねえねえ! きょうも\nあれ…… おねがい! いいでしょ!\pジャーン では ほんじつの そうだん!\nわたしが もっている ポケモン!\lさあ どのコを いちばん\lさいしょに だせば いいでしょう?"
	.byte EOS
	.if (. - gText_Rom_270579) > 0x86
	.error "gText_Rom_270579 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270579) < 0x86
	.space 0x86 - (. - gText_Rom_270579)
	.endif
