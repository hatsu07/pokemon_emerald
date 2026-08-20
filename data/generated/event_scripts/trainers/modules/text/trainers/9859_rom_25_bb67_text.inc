	@ data/text/trainers.inc:920 Route111_Text_BeauIntro (+1 aliases)
	.globl gText_Rom_25BB67
gText_Rom_25BB67: @ 0x0825BB67
	.string "ゴーゴーゴーグルを つけてると\nなんとなく ヒーローきぶん!\lいまの ぼくなら だれにだって かてるさ!{EOS}"
	.if (. - gText_Rom_25BB67) > 0x35
	.error "gText_Rom_25BB67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BB67) < 0x35
	.space 0x35 - (. - gText_Rom_25BB67)
	.endif
