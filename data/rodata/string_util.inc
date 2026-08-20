	.globl sDigits
sDigits: @ 0x082BF43C
	.string "0123456789ABCDEF"

	.globl sPowersOfTen
sPowersOfTen: @ 0x082BF44C
	.4byte 1
	.4byte 10
	.4byte 100
	.4byte 1000
	.4byte 10000
	.4byte 100000
	.4byte 1000000
	.4byte 10000000
	.4byte 100000000
	.4byte 1000000000

	.globl sBrailleSetFont
sBrailleSetFont: @ 0x082BF474
	.string "{FONT}{0x06}{EOS}"

	.globl sBrailleGotoLine2
sBrailleGotoLine2: @ 0x082BF478
	.string "\n{SHIFT_DOWN}{0x02}{EOS}"
	.balign 4, 0

	.globl sExpandPlaceholderFuncs
sExpandPlaceholderFuncs: @ 0x082BF480
	.4byte ExpandPlaceholder_UnknownStringVar
	.4byte ExpandPlaceholder_PlayerName
	.4byte ExpandPlaceholder_StringVar1
	.4byte ExpandPlaceholder_StringVar2
	.4byte ExpandPlaceholder_StringVar3
	.4byte ExpandPlaceholder_KunChan
	.4byte ExpandPlaceholder_RivalName
	.4byte ExpandPlaceholder_Version
	.4byte ExpandPlaceholder_Aqua
	.4byte ExpandPlaceholder_Magma
	.4byte ExpandPlaceholder_Archie
	.4byte ExpandPlaceholder_Maxie
	.4byte ExpandPlaceholder_Kyogre
	.4byte ExpandPlaceholder_Groudon
