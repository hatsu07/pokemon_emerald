	@ src/data/script_menu.h:4 script_menu_line_4
	.globl sScriptMenuText_Petalburg
sScriptMenuText_Petalburg: @ 0x085CA9FB
	.string "トウカ{EOS}"
	.if (. - sScriptMenuText_Petalburg) > 0x4
	.error "sScriptMenuText_Petalburg may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Petalburg) < 0x4
	.space 0x4 - (. - sScriptMenuText_Petalburg)
	.endif

	@ src/data/script_menu.h:5 script_menu_line_5
	.globl sScriptMenuText_Slateport
sScriptMenuText_Slateport: @ 0x085CA9FF
	.string "カイナ{EOS}"
	.if (. - sScriptMenuText_Slateport) > 0x4
	.error "sScriptMenuText_Slateport may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Slateport) < 0x4
	.space 0x4 - (. - sScriptMenuText_Slateport)
	.endif
	@ Decoded text from ROM range: offset=0x5CAA03, size=0x8
	.string "ミシロ{EOS}"
	.string "ミナモ{EOS}"

	@ src/data/script_menu.h:81 script_menu_line_81
	.globl sScriptMenuText_Dewford
sScriptMenuText_Dewford: @ 0x085CAA0B
	.string "ムロ{EOS}"
	.if (. - sScriptMenuText_Dewford) > 0x3
	.error "sScriptMenuText_Dewford may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Dewford) < 0x3
	.space 0x3 - (. - sScriptMenuText_Dewford)
	.endif
	@ Decoded text from ROM range: offset=0x5CAA0E, size=0x1C
	.string "さんか　する{EOS}"
	.string "せつめいをきく{EOS}"
	.string "ポケモンコンテストって？{EOS}"

	@ src/data/script_menu.h:21 script_menu_line_21
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_TypesOfContests
sScriptMenuText_TypesOfContests: @ 0x085CAA2A
	.string "コンテストの しゅるい{EOS}"
	.if (. - sScriptMenuText_TypesOfContests) != 0xc
	.error "sScriptMenuText_TypesOfContests must retain its original byte length"
	.endif
