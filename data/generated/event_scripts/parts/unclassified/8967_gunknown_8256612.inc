	.globl gUnknown_8256612
gUnknown_8256612: @ 0x08256612
	@ analyzed canonical ROM range 0x08256612-0x0825663A
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08256612: @ 0x08256612
EventScript_JP_08256612: @ 0x08256612
	@ event command: lockall
	.byte 0x69
	@ event command: dofieldeffect
	.byte 0x9C
	.2byte 0x0002
	@ event command: waitstate
	.byte 0x27
	@ event command: goto
	.byte 0x05
	.4byte 0x0825661D @ EventScript_JP_0825661D
	.byte 0x02
EventScript_JP_0825661D: @ 0x0825661D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0825662C @ Movement_JP_0825662C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x800F
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_0825662C: @ 0x0825662C
	@ object movement sequence
	.byte 0x5B @ cut_tree
	.byte 0xFE @ step_end
EventScript_JP_0825662E: @ 0x0825662E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0825666B @ gText_Rom_25666B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08256638: @ 0x08256638
	@ event command: closemessage
	.byte 0x68
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
