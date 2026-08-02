	.globl sDigits
sDigits: @ 0x082BF43C
	.incbin "baserom.gba", 0x2BF43C, 0x10

	.globl sPowersOfTen
sPowersOfTen: @ 0x082BF44C
	.incbin "baserom.gba", 0x2BF44C, 0x28

	.globl sBrailleSetFont
sBrailleSetFont: @ 0x082BF474
	.incbin "baserom.gba", 0x2BF474, 0x4

	.globl sBrailleGotoLine2
sBrailleGotoLine2: @ 0x082BF478
	.incbin "baserom.gba", 0x2BF478, 0x8

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

