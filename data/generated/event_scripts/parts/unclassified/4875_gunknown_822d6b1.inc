	.globl gUnknown_822D6B1
gUnknown_822D6B1: @ 0x0822D6B1
	@ analyzed canonical ROM range 0x0822D6B1-0x0822D717
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0822D6B1: @ 0x0822D6B1
EventScript_JP_0822D6B1: @ 0x0822D6B1
	@ event command: call
	.byte 0x04
	.4byte 0x08221FB3
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: addvar
	.byte 0x17
	.2byte 0x800D
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8006
	.2byte 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822D70E @ EventScript_JP_0822D70E
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x800D
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x1A
	.byte 0xFF
	.2byte 0x0001
	.2byte 0x0001
	.byte 0x27, 0x02
EventScript_JP_0822D70E: @ 0x0822D70E
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x1B
	.byte 0xFF
	.2byte 0x0011
	.2byte 0x0011
	.byte 0x27, 0x02
	.globl gUnknown_822D718
gUnknown_822D718: @ 0x0822D718
	@ analyzed canonical ROM range 0x0822D718-0x0822D732
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0822D718: @ 0x0822D718
EventScript_JP_0822D718: @ 0x0822D718
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x09
	.2byte 0x01EE
	.2byte 0x0000
	.4byte 0x0822D756 @ gText_Rom_22D756
	.4byte 0x0822D756 @ gText_Rom_22D756
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000A
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: closemessage
	.byte 0x68
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
	.globl gUnknown_822D733
gUnknown_822D733: @ 0x0822D733
	@ analyzed canonical ROM range 0x0822D733-0x0822D750
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0822D733: @ 0x0822D733
EventScript_JP_0822D733: @ 0x0822D733
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: callstd
	.byte 0x09
	.byte 0x01
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8007
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822D750 @ EventScript_JP_0822D750
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
EventScript_JP_0822D750: @ 0x0822D750
	@ event command: end
	.byte 0x02
	.globl gUnknown_822D751
gUnknown_822D751: @ 0x0822D751
	@ analyzed canonical ROM range 0x0822D751-0x0822D755
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0822D751: @ 0x0822D751
EventScript_JP_0822D751: @ 0x0822D751
	@ event command: goto
	.byte 0x05
	.4byte 0x0822D60B @ EventScript_JP_0822D60B
