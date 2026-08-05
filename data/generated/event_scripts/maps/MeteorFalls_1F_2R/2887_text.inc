	@ data/maps/MeteorFalls_1F_2R/scripts.inc:82 MeteorFalls_1F_2R_Text_NicolasRematchIntro (+1 aliases)
	.globl gText_Rom_213252
gText_Rom_213252: @ 0x08213252
	.string "あれから いちばん めざして\nかなり じぶんたちを きたえた……\pどれほど つよくなったか\nきみで たしかめさせて もらおうッ!$"
	.if (. - gText_Rom_213252) > 0x41
	.error "gText_Rom_213252 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213252) < 0x41
	.space 0x41 - (. - gText_Rom_213252)
	.endif
