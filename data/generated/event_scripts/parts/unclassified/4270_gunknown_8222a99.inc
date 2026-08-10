
	.globl gUnknown_8222A99
gUnknown_8222A99: @ 0x08222A99
	@ Replaced baserom.gba range: offset=0x222A99, size=0x2B
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_08222A99: @ 0x08222A99
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: special
	.byte 0x25
	.2byte 0x005E
	@ event command: waitstate
	.byte 0x27
	@ event command: waitse
	.byte 0x30
	@ event command: playse
	.byte 0x2F
	.2byte 0x010D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x08222B05 @ Movement_JP_08222B05
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243DC6 @ gText_Rom_243DC6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x00B9
	.2byte 0x0002
	@ event command: delay
	.byte 0x28
	.2byte 0x0028
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: setvar
	.byte 0x16
	.2byte 0x800F
	.2byte 0x000E

	setwildbattle SPECIES_SUDOWOODO, 40, ITEM_NONE

	@ Replaced baserom.gba range: offset=0x222ACA, size=0xE3
	@ semantic recovery: script_data; byte-verified against linked ROM
	@ event command: setflag
	.byte 0x29
	.2byte 0x08C1
	@ event command: dowildbattle
	.byte 0xB7
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x08C1
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00B4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08222AFC @ EventScript_JP_08222AFC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08222AFC @ EventScript_JP_08222AFC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08222AFC @ EventScript_JP_08222AFC
	@ event command: setflag
	.byte 0x29
	.2byte 0x01C6
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08222AFC: @ 0x08222AFC
	@ event command: setflag
	.byte 0x29
	.2byte 0x01C6
	@ event command: goto
	.byte 0x05
	.4byte 0x08244197
	.byte 0x02
Movement_JP_08222B05: @ 0x08222B05
	@ object movement sequence
	.byte 0x03 @ face_right
	.byte 0x13 @ delay_8
	.byte 0x00 @ face_down
	.byte 0x13 @ delay_8
	.byte 0x02 @ face_left
	.byte 0x13 @ delay_8
	.byte 0x00 @ face_down
	.byte 0x13 @ delay_8
	.byte 0x03 @ face_right
	.byte 0x13 @ delay_8
	.byte 0x00 @ face_down
	.byte 0x13 @ delay_8
	.byte 0x02 @ face_left
	.byte 0x13 @ delay_8
	.byte 0x00 @ face_down
	.byte 0xFE @ step_end
EventScript_JP_08222B15: @ 0x08222B15
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222FD8 @ gText_Rom_222FD8
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222B1E: @ 0x08222B1E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08223031 @ gText_Rom_223031
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222B27: @ 0x08222B27
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08223080 @ gText_Rom_223080
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222B30: @ 0x08222B30
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822312B @ gText_Rom_22312B
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222B39: @ 0x08222B39
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08223181 @ gText_Rom_223181
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222B42: @ 0x08222B42
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082231DF @ gText_Rom_2231DF
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222B4B: @ 0x08222B4B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08223210 @ gText_Rom_223210
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222B54: @ 0x08222B54
	@ event command: lock
	.byte 0x6A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822325E @ gText_Rom_22325E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08222B5F: @ 0x08222B5F
	@ event command: lock
	.byte 0x6A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08223282 @ gText_Rom_223282
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08222B6A: @ 0x08222B6A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222C23 @ gText_Rom_222C23
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08222B73: @ 0x08222B73
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222C46 @ gText_Rom_222C46
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08222B7C: @ 0x08222B7C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08223312 @ gText_Rom_223312
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222B85: @ 0x08222B85
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01C6
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08222B9A @ EventScript_JP_08222B9A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08223389 @ gText_Rom_223389
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08222B9A: @ 0x08222B9A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082233CD @ gText_Rom_2233CD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08222BA4: @ 0x08222BA4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08223411 @ gText_Rom_223411
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02

