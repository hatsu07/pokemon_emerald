	@ data/text/trainers.inc:2843 Route126_Text_PabloIntro (+1 aliases)
	.globl gText_Rom_260C7B
gText_Rom_260C7B: @ 0x08260C7B
	.string "からておう より たくましい\nこの にくたいびを みよ!{EOS}"
	.if (. - gText_Rom_260C7B) > 0x1d
	.error "gText_Rom_260C7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260C7B) < 0x1d
	.space 0x1d - (. - gText_Rom_260C7B)
	.endif
