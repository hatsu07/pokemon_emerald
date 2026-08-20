	@ data/maps/MtPyre_Summit/scripts.inc:551 MtPyre_Summit_Text_WillYouHearOutMyTale
	.globl gText_Rom_2175A3
gText_Rom_2175A3: @ 0x082175A3
	.string "おくりびやまは ポケモンの たましいを\nなぐさめる ための ところ……\pここは たかい ばしょに あって\nホウエンを みわたす ことが できるから\lポケモンたちの たましいも\lやすらぎを おぼえるの じゃろう……\pおまえさんが ここに きたのも\nなにかの えん……\pホウエンちほうに つたわる はなしを\nきいて いきなされ……{EOS}"
	.if (. - gText_Rom_2175A3) > 0xa4
	.error "gText_Rom_2175A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2175A3) < 0xa4
	.space 0xa4 - (. - gText_Rom_2175A3)
	.endif
