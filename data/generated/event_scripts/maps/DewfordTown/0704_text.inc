	@ data/maps/DewfordTown/scripts.inc:699 DewfordTown_Text_XHuhIThinkYIsCool
	.globl gText_Rom_1E55FE
gText_Rom_1E55FE: @ 0x081E55FE
	.string "ふーん\n『{STR_VAR_2}』 か…\pでも ぼくは\n『{STR_VAR_1}』 のほうが\lいいと おもうけどね$"
	.if (. - gText_Rom_1E55FE) > 0x28
	.error "gText_Rom_1E55FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E55FE) < 0x28
	.space 0x28 - (. - gText_Rom_1E55FE)
	.endif
