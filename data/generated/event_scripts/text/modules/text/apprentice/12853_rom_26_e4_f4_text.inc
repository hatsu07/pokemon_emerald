	@ data/text/apprentice.inc:199 gText_ApprenticeWhichLevelMode12
	.globl gText_Rom_26E4F4
gText_Rom_26E4F4: @ 0x0826E4F4
	.string "やったラッキー うれしーよ オレ!!\nさっそく なんか そうだんしてみる!?\lしかも ここは バトルタワー だから\lそのへん から きいてみる!?\pあのさっ! バトルタワーで オレ\nどっちの レベルが にあってる!?"
	.byte EOS
	.if (. - gText_Rom_26E4F4) > 0x6d
	.error "gText_Rom_26E4F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E4F4) < 0x6d
	.space 0x6d - (. - gText_Rom_26E4F4)
	.endif
