@ Battle Tower static tables.
@ Canonical ROM range: 0x085BE8B0-0x085BE99D.
@ Table names/shapes are supported by battle_tower consumers and upstream structure.

	.globl sBattleTowerFuncs
sBattleTowerFuncs: @ 0x085BE8B0
	.4byte sub_08161EA8
	.4byte sub_08161F68
	.4byte sub_08162008
	.4byte ChooseNextBattleTowerTrainer
	.4byte sub_081620D4
	.4byte AwardBattleTowerRibbons
	.4byte SaveBattleTowerProgress
	.4byte sub_0816383C
	.4byte BattleTowerNop1
	.4byte BattleTowerNop2
	.4byte sub_081641C8
	.4byte sub_08164718
	.4byte sub_08164A54
	.4byte sub_08164CAC
	.4byte sub_08164CC4
	.4byte sub_08164CE4
	.if (. - sBattleTowerFuncs) != 0x40
	.error "sBattleTowerFuncs size mismatch"
	.endif

	.globl sWinStreakFlags
sWinStreakFlags: @ 0x085BE8F0
	.4byte 0x00000001, 0x00000002
	.4byte 0x00004000, 0x00008000
	.4byte 0x00010000, 0x00020000
	.4byte 0x00040000, 0x00080000
	.if (. - sWinStreakFlags) != 0x20
	.error "sWinStreakFlags size mismatch"
	.endif

	.globl sWinStreakMasks
sWinStreakMasks: @ 0x085BE910
	.4byte 0xFFFFFFFE, 0xFFFFFFFD
	.4byte 0xFFFFBFFF, 0xFFFF7FFF
	.4byte 0xFFFEFFFF, 0xFFFDFFFF
	.4byte 0xFFFBFFFF, 0xFFF7FFFF
	.if (. - sWinStreakMasks) != 0x20
	.error "sWinStreakMasks size mismatch"
	.endif

	.globl sApprenticeChallengeThreshold
sApprenticeChallengeThreshold: @ 0x085BE930
	.byte 1, 2, 3, 4, 5, 8, 9, 10, 11, 12
	.if (. - sApprenticeChallengeThreshold) != 0xA
	.error "sApprenticeChallengeThreshold size mismatch"
	.endif

	.globl sBattleTowerPartySizes2
sBattleTowerPartySizes2: @ 0x085BE93A
	.byte 3, 4, 2, 2
	.if (. - sBattleTowerPartySizes2) != 0x4
	.error "sBattleTowerPartySizes2 size mismatch"
	.endif

	.globl sFrontierTrainerIdRanges
sFrontierTrainerIdRanges: @ 0x085BE93E
	.2byte   0,  99
	.2byte  80, 119
	.2byte 100, 139
	.2byte 120, 159
	.2byte 140, 179
	.2byte 160, 199
	.2byte 180, 219
	.2byte 200, 299
	.if (. - sFrontierTrainerIdRanges) != 0x20
	.error "sFrontierTrainerIdRanges size mismatch"
	.endif

	.globl sFrontierTrainerIdRangesHard
sFrontierTrainerIdRangesHard: @ 0x085BE95E
	.2byte 100, 119
	.2byte 120, 139
	.2byte 140, 159
	.2byte 160, 179
	.2byte 180, 199
	.2byte 200, 219
	.2byte 220, 239
	.2byte 200, 299
	.if (. - sFrontierTrainerIdRangesHard) != 0x20
	.error "sFrontierTrainerIdRangesHard size mismatch"
	.endif

@ Upstream-local sUnused[4]; subsystem-qualified here to avoid generic symbol collision.
	.globl sBattleTowerUnusedTrainerIds
sBattleTowerUnusedTrainerIds: @ 0x085BE97E
	.2byte 179, 141, 200, 183
	.if (. - sBattleTowerUnusedTrainerIds) != 0x8
	.error "sBattleTowerUnusedTrainerIds size mismatch"
	.endif

	.globl sRecordTrainerSpeechWon
sRecordTrainerSpeechWon: @ 0x085BE986
	.2byte 0x123C, 0x0C01, 0xFFFF, 0x0607, 0x0607, 0x0C01
	.if (. - sRecordTrainerSpeechWon) != 0xC
	.error "sRecordTrainerSpeechWon size mismatch"
	.endif

	.globl sRecordTrainerSpeechLost
sRecordTrainerSpeechLost: @ 0x085BE992
	.2byte 0x121B, 0x0C06, 0xFFFF, 0x0630, 0x121F, 0x0C06
	.if (. - sRecordTrainerSpeechLost) != 0xC
	.error "sRecordTrainerSpeechLost size mismatch"
	.endif
