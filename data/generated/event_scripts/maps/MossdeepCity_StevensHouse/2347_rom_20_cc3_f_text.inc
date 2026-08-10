	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:175 MossdeepCity_StevensHouse_Text_CollectionOfRareRocks
	.globl gText_Rom_20CC3F
gText_Rom_20CC3F: @ 0x0820CC3F
	.string "ダイゴの あつめた\nめずらしい いしが かざってある!$"
	.if (. - gText_Rom_20CC3F) > 0x1c
	.error "gText_Rom_20CC3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CC3F) < 0x1c
	.space 0x1c - (. - gText_Rom_20CC3F)
	.endif
	@ analyzed canonical ROM range 0x0820CC5B-0x0820CCB4
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820CC5B: @ 0x0820CC5B
	.byte 0x00
EventScript_JP_0820CC5C: @ 0x0820CC5C
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820CC71 @ EventScript_JP_0820CC71
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820CCB5 @ gText_Rom_20CCB5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_0820CC71: @ 0x0820CC71
EventScript_JP_0820CC71: @ 0x0820CC71
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820CCDB @ gText_Rom_20CCDB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820CC7B: @ 0x0820CC7B
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: special
	.byte 0x25
	.2byte 0x0007
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820CC98 @ EventScript_JP_0820CC98
	@ event command: special
	.byte 0x25
	.2byte 0x0116
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820CD10 @ gText_Rom_20CD10
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820CC98: @ 0x0820CC98
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820CD2C @ gText_Rom_20CD2C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820CCA2: @ 0x0820CCA2
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x013B
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820CD53 @ gText_Rom_20CD53
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
