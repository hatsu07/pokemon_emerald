	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl sInfoText_ChoiceBack
sInfoText_ChoiceBack: @ 0x085C93C4
	.string "もどる{EOS}"
	.if (. - sInfoText_ChoiceBack) > 0x4
	.error "sInfoText_ChoiceBack may not grow beyond its original slot"
	.endif
	.if (. - sInfoText_ChoiceBack) < 0x4
	.space 0x4 - (. - sInfoText_ChoiceBack)
	.endif
