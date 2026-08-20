	@ data/maps/LilycoveCity/scripts.inc:564 LilycoveCity_Text_IfWorldBecomesOurs
	.globl gText_Rom_1E0D4E
gText_Rom_1E0D4E: @ 0x081E0D4E
	.string "この ひろい せかい すべてが\nおれら アクアだんの ものに なったら\lポケモンも しあわせに なれるはずだ!{EOS}"
	.if (. - gText_Rom_1E0D4E) > 0x38
	.error "gText_Rom_1E0D4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0D4E) < 0x38
	.space 0x38 - (. - gText_Rom_1E0D4E)
	.endif
