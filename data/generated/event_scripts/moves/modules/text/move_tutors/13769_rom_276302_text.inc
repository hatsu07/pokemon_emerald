	@ data/text/move_tutors.inc:101 MoveTutor_Text_MetronomeWhichMon
	.globl gText_Rom_276302
gText_Rom_276302: @ 0x08276302
	.string "うん! じゃ おしえるね\nどのコが いいのかな?{EOS}"
	.if (. - gText_Rom_276302) > 0x19
	.error "gText_Rom_276302 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276302) < 0x19
	.space 0x19 - (. - gText_Rom_276302)
	.endif
