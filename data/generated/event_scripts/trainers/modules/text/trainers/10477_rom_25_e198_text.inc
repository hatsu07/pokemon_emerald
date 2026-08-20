	@ data/text/trainers.inc:1811 Route117_Text_MegRematchIntro (+1 aliases)
	.globl gText_Rom_25E198
gText_Rom_25E198: @ 0x0825E198
	.string "リコ『センパイとの タッグで\nこんどこそ あなたを まかしちゃうから!{EOS}"
	.if (. - gText_Rom_25E198) > 0x24
	.error "gText_Rom_25E198 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E198) < 0x24
	.space 0x24 - (. - gText_Rom_25E198)
	.endif
