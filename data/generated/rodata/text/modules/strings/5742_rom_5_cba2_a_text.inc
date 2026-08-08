	@ src/strings.c:573 gText_PickAWordOrPhraseAnd
	.globl gText_Rom_5CBA2A
gText_Rom_5CBA2A: @ 0x085CBA2A
	.string "ことばの なかから ひとつを えらんで$"
	.if (. - gText_Rom_5CBA2A) > 0x14
	.error "gText_Rom_5CBA2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA2A) < 0x14
	.space 0x14 - (. - gText_Rom_5CBA2A)
	.endif
