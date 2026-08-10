	.globl gUnknown_82566C6
gUnknown_82566C6: @ 0x082566C6
	@ analyzed canonical ROM range 0x082566C6-0x0825670F
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082566C6: @ 0x082566C6
EventScript_JP_082566C6: @ 0x082566C6
	@ event command: lockall
	.byte 0x69
	@ event command: dofieldeffect
	.byte 0x9C
	.2byte 0x0025
	@ event command: waitstate
	.byte 0x27
	@ event command: goto
	.byte 0x05
	.4byte 0x082566D1 @ EventScript_JP_082566D1
	.byte 0x02
EventScript_JP_082566D1: @ 0x082566D1
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08256701 @ Movement_JP_08256701
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x800F
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0129
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082566FF @ EventScript_JP_082566FF
	@ event command: special
	.byte 0x25
	.2byte 0x00AB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082566FF @ EventScript_JP_082566FF
	@ event command: waitstate
	.byte 0x27
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082566FF: @ 0x082566FF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_08256701: @ 0x08256701
	@ object movement sequence
	.byte 0x5A @ rock_smash_break
	.byte 0xFE @ step_end
EventScript_JP_08256703: @ 0x08256703
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08256733 @ gText_Rom_256733
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0825670D: @ 0x0825670D
	@ event command: closemessage
	.byte 0x68
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
