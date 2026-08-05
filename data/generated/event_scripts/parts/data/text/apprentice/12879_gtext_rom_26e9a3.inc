	@ data/text/apprentice.inc:235 gText_ApprenticeWhichLevelMode15
	.globl gText_Rom_26E9A3
gText_Rom_26E9A3: @ 0x0826E9A3
	.string "ほんとうに みとめて くれるのかね?\nぬかよろこびは したく ないからな\pいや ほんとうなら いいんだ わるかった\nさっそく そうだんに のってほしい\pわたしが バトルタワーに でるなら\nレベル50…… オープンレベル……\lどちらの ほうが ふさわしいと おもうかね"
	.byte EOS
	.if (. - gText_Rom_26E9A3) > 0x86
	.error "gText_Rom_26E9A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E9A3) < 0x86
	.space 0x86 - (. - gText_Rom_26E9A3)
	.endif
