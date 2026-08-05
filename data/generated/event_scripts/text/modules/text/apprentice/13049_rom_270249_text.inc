	@ data/text/apprentice.inc:490 gText_ApprenticeMonFirstThanks1
	.globl gText_Rom_270249
gText_Rom_270249: @ 0x08270249
	.string "{STR_VAR_1}かあ そーだよね!\nじゃあ そうするー!\pせんせい ありがと!"
	.byte EOS
	.if (. - gText_Rom_270249) > 0x22
	.error "gText_Rom_270249 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270249) < 0x22
	.space 0x22 - (. - gText_Rom_270249)
	.endif
