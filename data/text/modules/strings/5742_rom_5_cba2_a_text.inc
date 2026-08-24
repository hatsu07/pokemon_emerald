	@ src/strings.c:573 gText_PickAWordOrPhraseAnd
	.globl gText_PickAWordOrPhraseAnd
gText_PickAWordOrPhraseAnd: @ 0x085CBA2A
	.string "ことばの なかから ひとつを えらんで{EOS}"
	.if (. - gText_PickAWordOrPhraseAnd) > 0x14
	.error "gText_PickAWordOrPhraseAnd may not grow beyond its original slot"
	.endif
	.if (. - gText_PickAWordOrPhraseAnd) < 0x14
	.space 0x14 - (. - gText_PickAWordOrPhraseAnd)
	.endif
