	.globl gUnknown_84DD88C
gUnknown_84DD88C: @ 0x084DD88C
	.4byte MovementType_None
	.4byte MovementType_LookAround
	.4byte MovementType_WanderAround
	.4byte MovementType_WanderUpAndDown
	.4byte MovementType_WanderUpAndDown
	.4byte MovementType_WanderLeftAndRight
	.4byte MovementType_WanderLeftAndRight
	.4byte MovementType_FaceDirection
	.4byte MovementType_FaceDirection
	.4byte MovementType_FaceDirection
	.4byte MovementType_FaceDirection
	.4byte MovementType_Player
	.4byte MovementType_BerryTreeGrowth
	.4byte MovementType_FaceDownAndUp
	.4byte MovementType_FaceLeftAndRight
	.4byte MovementType_FaceUpAndLeft
	.4byte MovementType_FaceUpAndRight
	.4byte MovementType_FaceDownAndLeft
	.4byte MovementType_FaceDownAndRight
	.4byte MovementType_FaceDownUpAndLeft
	.4byte MovementType_FaceDownUpAndRight
	.4byte MovementType_FaceUpRightAndLeft
	.4byte MovementType_FaceDownRightAndLeft
	.4byte MovementType_RotateCounterclockwise
	.4byte MovementType_RotateClockwise
	.4byte MovementType_WalkBackAndForth
	.4byte MovementType_WalkBackAndForth
	.4byte MovementType_WalkBackAndForth
	.4byte MovementType_WalkBackAndForth
	.4byte MovementType_WalkSequenceUpRightLeftDown
	.4byte MovementType_WalkSequenceRightLeftDownUp
	.4byte MovementType_WalkSequenceDownUpRightLeft
	.4byte MovementType_WalkSequenceLeftDownUpRight
	.4byte MovementType_WalkSequenceUpLeftRightDown
	.4byte MovementType_WalkSequenceLeftRightDownUp
	.4byte MovementType_WalkSequenceDownUpLeftRight
	.4byte MovementType_WalkSequenceRightDownUpLeft
	.4byte MovementType_WalkSequenceLeftUpDownRight
	.4byte MovementType_WalkSequenceUpDownRightLeft
	.4byte MovementType_WalkSequenceRightLeftUpDown
	.4byte MovementType_WalkSequenceDownRightLeftUp
	.4byte MovementType_WalkSequenceRightUpDownLeft
	.4byte MovementType_WalkSequenceUpDownLeftRight
	.4byte MovementType_WalkSequenceLeftRightUpDown
	.4byte MovementType_WalkSequenceDownLeftRightUp
	.4byte MovementType_WalkSequenceUpLeftDownRight
	.4byte MovementType_WalkSequenceDownRightUpLeft
	.4byte MovementType_WalkSequenceLeftDownRightUp
	.4byte MovementType_WalkSequenceRightUpLeftDown
	.4byte MovementType_WalkSequenceUpRightDownLeft
	.4byte MovementType_WalkSequenceDownLeftUpRight
	.4byte MovementType_WalkSequenceLeftUpRightDown
	.4byte MovementType_WalkSequenceRightDownLeftUp
	.4byte MovementType_CopyPlayer
	.4byte MovementType_CopyPlayer
	.4byte MovementType_CopyPlayer
	.4byte MovementType_CopyPlayer
	.4byte MovementType_TreeDisguise
	.4byte MovementType_MountainDisguise
	.4byte MovementType_CopyPlayerInGrass
	.4byte MovementType_CopyPlayerInGrass
	.4byte MovementType_CopyPlayerInGrass
	.4byte MovementType_CopyPlayerInGrass
	.4byte MovementType_Hidden
	.4byte MovementType_WalkInPlace
	.4byte MovementType_WalkInPlace
	.4byte MovementType_WalkInPlace
	.4byte MovementType_WalkInPlace
	.4byte MovementType_JogInPlace
	.4byte MovementType_JogInPlace
	.4byte MovementType_JogInPlace
	.4byte MovementType_JogInPlace
	.4byte MovementType_RunInPlace
	.4byte MovementType_RunInPlace
	.4byte MovementType_RunInPlace
	.4byte MovementType_RunInPlace
	.4byte MovementType_Invisible
	.4byte MovementType_WalkSlowlyInPlace
	.4byte MovementType_WalkSlowlyInPlace
	.4byte MovementType_WalkSlowlyInPlace
	.4byte MovementType_WalkSlowlyInPlace
	@ pret/pokeemerald-jp direct xref for 0x084DD9D0: event_object_movement.s: InitEventObjectStateFromTemplate
	.globl gEventObjectMovementData_084DD9D0
gEventObjectMovementData_084DD9D0: @ 0x084DD9D0
	@ analyzed canonical ROM range 0x084DD9D0-0x084DDA20
sMovementTypeInitialFacingCycleFlags: @ 0x084DD9D0
	.byte 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
	.byte 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
	.byte 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x084DDA21: event_object_movement.s: CopyablePlayerMovement_FaceDirection, CopyablePlayerMovement_GoSpeed0, CopyablePlayerMovement_GoSpeed1, CopyablePlayerMovement_GoSpeed2, CopyablePlayerMovement_GoSpeed4 (+6 more)
	.globl gEventObjectMovementData_084DDA21
gEventObjectMovementData_084DDA21: @ 0x084DDA21
	@ analyzed canonical ROM range 0x084DDA21-0x084DDA73
sMovementTypeInitialDirections: @ 0x084DDA21
	.byte 0x01, 0x01, 0x01, 0x02, 0x01, 0x03, 0x04, 0x02, 0x01, 0x03, 0x04, 0x01, 0x01, 0x01, 0x03, 0x02
	.byte 0x02, 0x01, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01, 0x02, 0x01, 0x03, 0x04, 0x02, 0x04, 0x01
	.byte 0x03, 0x02, 0x03, 0x01, 0x04, 0x03, 0x02, 0x04, 0x01, 0x04, 0x02, 0x03, 0x01, 0x02, 0x01, 0x03
	.byte 0x04, 0x02, 0x01, 0x03, 0x04, 0x02, 0x01, 0x03, 0x04, 0x01, 0x01, 0x02, 0x01, 0x03, 0x04, 0x01
	.byte 0x01, 0x02, 0x03, 0x04, 0x01, 0x02, 0x03, 0x04, 0x01, 0x02, 0x03, 0x04, 0x01, 0x01, 0x02, 0x03
	.byte 0x04, 0x00, 0x00
	.globl gUnknown_84DDA74
gUnknown_84DDA74: @ 0x084DDA74
	@ confirmed contiguous ROM pointer table: 284 entries from this address
sPointerTable_084DDA74:
	.globl gObjectEventGraphicsInfoPointers
gObjectEventGraphicsInfoPointers:
	@ analyzed canonical ROM range 0x084DDA74-0x084DDE2F
	@ 239-entry OBJ_EVENT_GFX table; boundary corrected from Stage1 pointer-run inference.
	.4byte gObjectEventGraphicsInfo_JP_000 @ OBJ_EVENT_GFX index 0
	.4byte gObjectEventGraphicsInfo_JP_001 @ OBJ_EVENT_GFX index 1
	.4byte gObjectEventGraphicsInfo_JP_002 @ OBJ_EVENT_GFX index 2
	.4byte gObjectEventGraphicsInfo_JP_003 @ OBJ_EVENT_GFX index 3
	.4byte gObjectEventGraphicsInfo_JP_004 @ OBJ_EVENT_GFX index 4
	.4byte gObjectEventGraphicsInfo_JP_005 @ OBJ_EVENT_GFX index 5
	.4byte gObjectEventGraphicsInfo_JP_006 @ OBJ_EVENT_GFX index 6
	.4byte gObjectEventGraphicsInfo_JP_007 @ OBJ_EVENT_GFX index 7
	.4byte gObjectEventGraphicsInfo_JP_008 @ OBJ_EVENT_GFX index 8
	.4byte gObjectEventGraphicsInfo_JP_009 @ OBJ_EVENT_GFX index 9
	.4byte gObjectEventGraphicsInfo_JP_010 @ OBJ_EVENT_GFX index 10
	.4byte gObjectEventGraphicsInfo_JP_011 @ OBJ_EVENT_GFX index 11
	.4byte gObjectEventGraphicsInfo_JP_012 @ OBJ_EVENT_GFX index 12
	.4byte gObjectEventGraphicsInfo_JP_013 @ OBJ_EVENT_GFX index 13
	.4byte gObjectEventGraphicsInfo_JP_014 @ OBJ_EVENT_GFX index 14
	.4byte gObjectEventGraphicsInfo_JP_015 @ OBJ_EVENT_GFX index 15
	.4byte gObjectEventGraphicsInfo_JP_016 @ OBJ_EVENT_GFX index 16
	.4byte gObjectEventGraphicsInfo_JP_017 @ OBJ_EVENT_GFX index 17
	.4byte gObjectEventGraphicsInfo_JP_018 @ OBJ_EVENT_GFX index 18
	.4byte gObjectEventGraphicsInfo_JP_019 @ OBJ_EVENT_GFX index 19
	.4byte gObjectEventGraphicsInfo_JP_020 @ OBJ_EVENT_GFX index 20
	.4byte gObjectEventGraphicsInfo_JP_021 @ OBJ_EVENT_GFX index 21
	.4byte gObjectEventGraphicsInfo_JP_022 @ OBJ_EVENT_GFX index 22
	.4byte gObjectEventGraphicsInfo_JP_023 @ OBJ_EVENT_GFX index 23
	.4byte gObjectEventGraphicsInfo_JP_024 @ OBJ_EVENT_GFX index 24
	.4byte gObjectEventGraphicsInfo_JP_025 @ OBJ_EVENT_GFX index 25
	.4byte gObjectEventGraphicsInfo_JP_026 @ OBJ_EVENT_GFX index 26
	.4byte gObjectEventGraphicsInfo_JP_027 @ OBJ_EVENT_GFX index 27
	.4byte gObjectEventGraphicsInfo_JP_028 @ OBJ_EVENT_GFX index 28
	.4byte gObjectEventGraphicsInfo_JP_029 @ OBJ_EVENT_GFX index 29
	.4byte gObjectEventGraphicsInfo_JP_030 @ OBJ_EVENT_GFX index 30
	.4byte gObjectEventGraphicsInfo_JP_031 @ OBJ_EVENT_GFX index 31
	.4byte gObjectEventGraphicsInfo_JP_032 @ OBJ_EVENT_GFX index 32
	.4byte gObjectEventGraphicsInfo_JP_033 @ OBJ_EVENT_GFX index 33
	.4byte gObjectEventGraphicsInfo_JP_034 @ OBJ_EVENT_GFX index 34
	.4byte gObjectEventGraphicsInfo_JP_035 @ OBJ_EVENT_GFX index 35
	.4byte gObjectEventGraphicsInfo_JP_036 @ OBJ_EVENT_GFX index 36
	.4byte gObjectEventGraphicsInfo_JP_037 @ OBJ_EVENT_GFX index 37
	.4byte gObjectEventGraphicsInfo_JP_038 @ OBJ_EVENT_GFX index 38
	.4byte gObjectEventGraphicsInfo_JP_039 @ OBJ_EVENT_GFX index 39
	.4byte gObjectEventGraphicsInfo_JP_040 @ OBJ_EVENT_GFX index 40
	.4byte gObjectEventGraphicsInfo_JP_041 @ OBJ_EVENT_GFX index 41
	.4byte gObjectEventGraphicsInfo_JP_042 @ OBJ_EVENT_GFX index 42
	.4byte gObjectEventGraphicsInfo_JP_043 @ OBJ_EVENT_GFX index 43
	.4byte gObjectEventGraphicsInfo_JP_044 @ OBJ_EVENT_GFX index 44
	.4byte gObjectEventGraphicsInfo_JP_045 @ OBJ_EVENT_GFX index 45
	.4byte gObjectEventGraphicsInfo_JP_046 @ OBJ_EVENT_GFX index 46
	.4byte gObjectEventGraphicsInfo_JP_047 @ OBJ_EVENT_GFX index 47
	.4byte gObjectEventGraphicsInfo_JP_048 @ OBJ_EVENT_GFX index 48
	.4byte gObjectEventGraphicsInfo_JP_049 @ OBJ_EVENT_GFX index 49
	.4byte gObjectEventGraphicsInfo_JP_050 @ OBJ_EVENT_GFX index 50
	.4byte gObjectEventGraphicsInfo_JP_051 @ OBJ_EVENT_GFX index 51
	.4byte gObjectEventGraphicsInfo_JP_052 @ OBJ_EVENT_GFX index 52
	.4byte gObjectEventGraphicsInfo_JP_053 @ OBJ_EVENT_GFX index 53
	.4byte gObjectEventGraphicsInfo_JP_054 @ OBJ_EVENT_GFX index 54
	.4byte gObjectEventGraphicsInfo_JP_055 @ OBJ_EVENT_GFX index 55
	.4byte gObjectEventGraphicsInfo_JP_056 @ OBJ_EVENT_GFX index 56
	.4byte gObjectEventGraphicsInfo_JP_057 @ OBJ_EVENT_GFX index 57
	.4byte gObjectEventGraphicsInfo_JP_058 @ OBJ_EVENT_GFX index 58
	.4byte gObjectEventGraphicsInfo_JP_059 @ OBJ_EVENT_GFX index 59
	.4byte gObjectEventGraphicsInfo_JP_060 @ OBJ_EVENT_GFX index 60
	.4byte gObjectEventGraphicsInfo_JP_061 @ OBJ_EVENT_GFX index 61
	.4byte gObjectEventGraphicsInfo_JP_062 @ OBJ_EVENT_GFX index 62
	.4byte gObjectEventGraphicsInfo_JP_063 @ OBJ_EVENT_GFX index 63
	.4byte gObjectEventGraphicsInfo_JP_064 @ OBJ_EVENT_GFX index 64
	.4byte gObjectEventGraphicsInfo_JP_065 @ OBJ_EVENT_GFX index 65
	.4byte gObjectEventGraphicsInfo_JP_066 @ OBJ_EVENT_GFX index 66
	.4byte gObjectEventGraphicsInfo_JP_067 @ OBJ_EVENT_GFX index 67
	.4byte gObjectEventGraphicsInfo_JP_068 @ OBJ_EVENT_GFX index 68
	.4byte gObjectEventGraphicsInfo_JP_069 @ OBJ_EVENT_GFX index 69
	.4byte gObjectEventGraphicsInfo_JP_070 @ OBJ_EVENT_GFX index 70
	.4byte gObjectEventGraphicsInfo_JP_071 @ OBJ_EVENT_GFX index 71
	.4byte gObjectEventGraphicsInfo_JP_072 @ OBJ_EVENT_GFX index 72
	.4byte gObjectEventGraphicsInfo_JP_073 @ OBJ_EVENT_GFX index 73
	.4byte gObjectEventGraphicsInfo_JP_074 @ OBJ_EVENT_GFX index 74
	.4byte gObjectEventGraphicsInfo_JP_075 @ OBJ_EVENT_GFX index 75
	.4byte gObjectEventGraphicsInfo_JP_076 @ OBJ_EVENT_GFX index 76
	.4byte gObjectEventGraphicsInfo_JP_077 @ OBJ_EVENT_GFX index 77
	.4byte gObjectEventGraphicsInfo_JP_078 @ OBJ_EVENT_GFX index 78
	.4byte gObjectEventGraphicsInfo_JP_079 @ OBJ_EVENT_GFX index 79
	.4byte gObjectEventGraphicsInfo_JP_080 @ OBJ_EVENT_GFX index 80
	.4byte gObjectEventGraphicsInfo_JP_081 @ OBJ_EVENT_GFX index 81
	.4byte gObjectEventGraphicsInfo_JP_082 @ OBJ_EVENT_GFX index 82
	.4byte gObjectEventGraphicsInfo_JP_083 @ OBJ_EVENT_GFX index 83
	.4byte gObjectEventGraphicsInfo_JP_084 @ OBJ_EVENT_GFX index 84
	.4byte gObjectEventGraphicsInfo_JP_085 @ OBJ_EVENT_GFX index 85
	.4byte gObjectEventGraphicsInfo_JP_086 @ OBJ_EVENT_GFX index 86
	.4byte gObjectEventGraphicsInfo_JP_087 @ OBJ_EVENT_GFX index 87
	.4byte gObjectEventGraphicsInfo_JP_088 @ OBJ_EVENT_GFX index 88
	.4byte gObjectEventGraphicsInfo_JP_089 @ OBJ_EVENT_GFX index 89
	.4byte gObjectEventGraphicsInfo_JP_090 @ OBJ_EVENT_GFX index 90
	.4byte gObjectEventGraphicsInfo_JP_091 @ OBJ_EVENT_GFX index 91
	.4byte gObjectEventGraphicsInfo_JP_092 @ OBJ_EVENT_GFX index 92
	.4byte gObjectEventGraphicsInfo_JP_093 @ OBJ_EVENT_GFX index 93
	.4byte gObjectEventGraphicsInfo_JP_094 @ OBJ_EVENT_GFX index 94
	.4byte gObjectEventGraphicsInfo_JP_095 @ OBJ_EVENT_GFX index 95
	.4byte gObjectEventGraphicsInfo_JP_096 @ OBJ_EVENT_GFX index 96
	.4byte gObjectEventGraphicsInfo_JP_097 @ OBJ_EVENT_GFX index 97
	.4byte gObjectEventGraphicsInfo_JP_098 @ OBJ_EVENT_GFX index 98
	.4byte gObjectEventGraphicsInfo_JP_099 @ OBJ_EVENT_GFX index 99
	.4byte gObjectEventGraphicsInfo_JP_100 @ OBJ_EVENT_GFX index 100
	.4byte gObjectEventGraphicsInfo_JP_101 @ OBJ_EVENT_GFX index 101
	.4byte gObjectEventGraphicsInfo_JP_102 @ OBJ_EVENT_GFX index 102
	.4byte gObjectEventGraphicsInfo_JP_103 @ OBJ_EVENT_GFX index 103
	.4byte gObjectEventGraphicsInfo_JP_104 @ OBJ_EVENT_GFX index 104
	.4byte gObjectEventGraphicsInfo_JP_105 @ OBJ_EVENT_GFX index 105
	.4byte gObjectEventGraphicsInfo_JP_106 @ OBJ_EVENT_GFX index 106
	.4byte gObjectEventGraphicsInfo_JP_107 @ OBJ_EVENT_GFX index 107
	.4byte gObjectEventGraphicsInfo_JP_108 @ OBJ_EVENT_GFX index 108
	.4byte gObjectEventGraphicsInfo_JP_109 @ OBJ_EVENT_GFX index 109
	.4byte gObjectEventGraphicsInfo_JP_110 @ OBJ_EVENT_GFX index 110
	.4byte gObjectEventGraphicsInfo_JP_111 @ OBJ_EVENT_GFX index 111
	.4byte gObjectEventGraphicsInfo_JP_112 @ OBJ_EVENT_GFX index 112
	.4byte gObjectEventGraphicsInfo_JP_113 @ OBJ_EVENT_GFX index 113
	.4byte gObjectEventGraphicsInfo_JP_114 @ OBJ_EVENT_GFX index 114
	.4byte gObjectEventGraphicsInfo_JP_115 @ OBJ_EVENT_GFX index 115
	.4byte gObjectEventGraphicsInfo_JP_116 @ OBJ_EVENT_GFX index 116
	.4byte gObjectEventGraphicsInfo_JP_117 @ OBJ_EVENT_GFX index 117
	.4byte gObjectEventGraphicsInfo_JP_118 @ OBJ_EVENT_GFX index 118
	.4byte gObjectEventGraphicsInfo_JP_119 @ OBJ_EVENT_GFX index 119
	.4byte gObjectEventGraphicsInfo_JP_120 @ OBJ_EVENT_GFX index 120
	.4byte gObjectEventGraphicsInfo_JP_121 @ OBJ_EVENT_GFX index 121
	.4byte gObjectEventGraphicsInfo_JP_122 @ OBJ_EVENT_GFX index 122
	.4byte gObjectEventGraphicsInfo_JP_123 @ OBJ_EVENT_GFX index 123
	.4byte gObjectEventGraphicsInfo_JP_124 @ OBJ_EVENT_GFX index 124
	.4byte gObjectEventGraphicsInfo_JP_125 @ OBJ_EVENT_GFX index 125
	.4byte gObjectEventGraphicsInfo_JP_126 @ OBJ_EVENT_GFX index 126
	.4byte gObjectEventGraphicsInfo_JP_127 @ OBJ_EVENT_GFX index 127
	.4byte gObjectEventGraphicsInfo_JP_128 @ OBJ_EVENT_GFX index 128
	.4byte gObjectEventGraphicsInfo_JP_129 @ OBJ_EVENT_GFX index 129
	.4byte gObjectEventGraphicsInfo_JP_130 @ OBJ_EVENT_GFX index 130
	.4byte gObjectEventGraphicsInfo_JP_131 @ OBJ_EVENT_GFX index 131
	.4byte gObjectEventGraphicsInfo_JP_132 @ OBJ_EVENT_GFX index 132
	.4byte gObjectEventGraphicsInfo_JP_133 @ OBJ_EVENT_GFX index 133
	.4byte gObjectEventGraphicsInfo_JP_134 @ OBJ_EVENT_GFX index 134
	.4byte gObjectEventGraphicsInfo_JP_135 @ OBJ_EVENT_GFX index 135
	.4byte gObjectEventGraphicsInfo_JP_136 @ OBJ_EVENT_GFX index 136
	.4byte gObjectEventGraphicsInfo_JP_137 @ OBJ_EVENT_GFX index 137
	.4byte gObjectEventGraphicsInfo_JP_138 @ OBJ_EVENT_GFX index 138
	.4byte gObjectEventGraphicsInfo_JP_139 @ OBJ_EVENT_GFX index 139
	.4byte gObjectEventGraphicsInfo_JP_140 @ OBJ_EVENT_GFX index 140
	.4byte gObjectEventGraphicsInfo_JP_141 @ OBJ_EVENT_GFX index 141
	.4byte gObjectEventGraphicsInfo_JP_142 @ OBJ_EVENT_GFX index 142
	.4byte gObjectEventGraphicsInfo_JP_143 @ OBJ_EVENT_GFX index 143
	.4byte gObjectEventGraphicsInfo_JP_144 @ OBJ_EVENT_GFX index 144
	.4byte gObjectEventGraphicsInfo_JP_145 @ OBJ_EVENT_GFX index 145
	.4byte gObjectEventGraphicsInfo_JP_146 @ OBJ_EVENT_GFX index 146
	.4byte gObjectEventGraphicsInfo_JP_147 @ OBJ_EVENT_GFX index 147
	.4byte gObjectEventGraphicsInfo_JP_148 @ OBJ_EVENT_GFX index 148
	.4byte gObjectEventGraphicsInfo_JP_149 @ OBJ_EVENT_GFX index 149
	.4byte gObjectEventGraphicsInfo_JP_150 @ OBJ_EVENT_GFX index 150
	.4byte gObjectEventGraphicsInfo_JP_151 @ OBJ_EVENT_GFX index 151
	.4byte gObjectEventGraphicsInfo_JP_152 @ OBJ_EVENT_GFX index 152
	.4byte gObjectEventGraphicsInfo_JP_153 @ OBJ_EVENT_GFX index 153
	.4byte gObjectEventGraphicsInfo_JP_154 @ OBJ_EVENT_GFX index 154
	.4byte gObjectEventGraphicsInfo_JP_155 @ OBJ_EVENT_GFX index 155
	.4byte gObjectEventGraphicsInfo_JP_156 @ OBJ_EVENT_GFX index 156
	.4byte gObjectEventGraphicsInfo_JP_157 @ OBJ_EVENT_GFX index 157
	.4byte gObjectEventGraphicsInfo_JP_158 @ OBJ_EVENT_GFX index 158
	.4byte gObjectEventGraphicsInfo_JP_159 @ OBJ_EVENT_GFX index 159
	.4byte gObjectEventGraphicsInfo_JP_160 @ OBJ_EVENT_GFX index 160
	.4byte gObjectEventGraphicsInfo_JP_161 @ OBJ_EVENT_GFX index 161
	.4byte gObjectEventGraphicsInfo_JP_162 @ OBJ_EVENT_GFX index 162
	.4byte gObjectEventGraphicsInfo_JP_163 @ OBJ_EVENT_GFX index 163
	.4byte gObjectEventGraphicsInfo_JP_164 @ OBJ_EVENT_GFX index 164
	.4byte gObjectEventGraphicsInfo_JP_165 @ OBJ_EVENT_GFX index 165
	.4byte gObjectEventGraphicsInfo_JP_166 @ OBJ_EVENT_GFX index 166
	.4byte gObjectEventGraphicsInfo_JP_167 @ OBJ_EVENT_GFX index 167
	.4byte gObjectEventGraphicsInfo_JP_168 @ OBJ_EVENT_GFX index 168
	.4byte gObjectEventGraphicsInfo_JP_169 @ OBJ_EVENT_GFX index 169
	.4byte gObjectEventGraphicsInfo_JP_170 @ OBJ_EVENT_GFX index 170
	.4byte gObjectEventGraphicsInfo_JP_171 @ OBJ_EVENT_GFX index 171
	.4byte gObjectEventGraphicsInfo_JP_172 @ OBJ_EVENT_GFX index 172
	.4byte gObjectEventGraphicsInfo_JP_173 @ OBJ_EVENT_GFX index 173
	.4byte gObjectEventGraphicsInfo_JP_174 @ OBJ_EVENT_GFX index 174
	.4byte gObjectEventGraphicsInfo_JP_175 @ OBJ_EVENT_GFX index 175
	.4byte gObjectEventGraphicsInfo_JP_176 @ OBJ_EVENT_GFX index 176
	.4byte gObjectEventGraphicsInfo_JP_177 @ OBJ_EVENT_GFX index 177
	.4byte gObjectEventGraphicsInfo_JP_178 @ OBJ_EVENT_GFX index 178
	.4byte gObjectEventGraphicsInfo_JP_179 @ OBJ_EVENT_GFX index 179
	.4byte gObjectEventGraphicsInfo_JP_180 @ OBJ_EVENT_GFX index 180
	.4byte gObjectEventGraphicsInfo_JP_181 @ OBJ_EVENT_GFX index 181
	.4byte gObjectEventGraphicsInfo_JP_182 @ OBJ_EVENT_GFX index 182
	.4byte gObjectEventGraphicsInfo_JP_183 @ OBJ_EVENT_GFX index 183
	.4byte gObjectEventGraphicsInfo_JP_184 @ OBJ_EVENT_GFX index 184
	.4byte gObjectEventGraphicsInfo_JP_185 @ OBJ_EVENT_GFX index 185
	.4byte gObjectEventGraphicsInfo_JP_186 @ OBJ_EVENT_GFX index 186
	.4byte gObjectEventGraphicsInfo_JP_187 @ OBJ_EVENT_GFX index 187
	.4byte gObjectEventGraphicsInfo_JP_188 @ OBJ_EVENT_GFX index 188
	.4byte gObjectEventGraphicsInfo_JP_189 @ OBJ_EVENT_GFX index 189
	.4byte gObjectEventGraphicsInfo_JP_190 @ OBJ_EVENT_GFX index 190
	.4byte gObjectEventGraphicsInfo_JP_191 @ OBJ_EVENT_GFX index 191
	.4byte gObjectEventGraphicsInfo_JP_192 @ OBJ_EVENT_GFX index 192
	.4byte gObjectEventGraphicsInfo_JP_193 @ OBJ_EVENT_GFX index 193
	.4byte gObjectEventGraphicsInfo_JP_194 @ OBJ_EVENT_GFX index 194
	.4byte gObjectEventGraphicsInfo_JP_195 @ OBJ_EVENT_GFX index 195
	.4byte gObjectEventGraphicsInfo_JP_196 @ OBJ_EVENT_GFX index 196
	.4byte gObjectEventGraphicsInfo_JP_197 @ OBJ_EVENT_GFX index 197
	.4byte gObjectEventGraphicsInfo_JP_198 @ OBJ_EVENT_GFX index 198
	.4byte gObjectEventGraphicsInfo_JP_199 @ OBJ_EVENT_GFX index 199
	.4byte gObjectEventGraphicsInfo_JP_200 @ OBJ_EVENT_GFX index 200
	.4byte gObjectEventGraphicsInfo_JP_201 @ OBJ_EVENT_GFX index 201
	.4byte gObjectEventGraphicsInfo_JP_202 @ OBJ_EVENT_GFX index 202
	.4byte gObjectEventGraphicsInfo_JP_203 @ OBJ_EVENT_GFX index 203
	.4byte gObjectEventGraphicsInfo_JP_204 @ OBJ_EVENT_GFX index 204
	.4byte gObjectEventGraphicsInfo_JP_205 @ OBJ_EVENT_GFX index 205
	.4byte gObjectEventGraphicsInfo_JP_206 @ OBJ_EVENT_GFX index 206
	.4byte gObjectEventGraphicsInfo_JP_207 @ OBJ_EVENT_GFX index 207
	.4byte gObjectEventGraphicsInfo_JP_208 @ OBJ_EVENT_GFX index 208
	.4byte gObjectEventGraphicsInfo_JP_209 @ OBJ_EVENT_GFX index 209
	.4byte gObjectEventGraphicsInfo_JP_210 @ OBJ_EVENT_GFX index 210
	.4byte gObjectEventGraphicsInfo_JP_211 @ OBJ_EVENT_GFX index 211
	.4byte gObjectEventGraphicsInfo_JP_212 @ OBJ_EVENT_GFX index 212
	.4byte gObjectEventGraphicsInfo_JP_213 @ OBJ_EVENT_GFX index 213
	.4byte gObjectEventGraphicsInfo_JP_214 @ OBJ_EVENT_GFX index 214
	.4byte gObjectEventGraphicsInfo_JP_215 @ OBJ_EVENT_GFX index 215
	.4byte gObjectEventGraphicsInfo_JP_216 @ OBJ_EVENT_GFX index 216
	.4byte gObjectEventGraphicsInfo_JP_217 @ OBJ_EVENT_GFX index 217
	.4byte gObjectEventGraphicsInfo_JP_218 @ OBJ_EVENT_GFX index 218
	.4byte gObjectEventGraphicsInfo_JP_219 @ OBJ_EVENT_GFX index 219
	.4byte gObjectEventGraphicsInfo_JP_220 @ OBJ_EVENT_GFX index 220
	.4byte gObjectEventGraphicsInfo_JP_221 @ OBJ_EVENT_GFX index 221
	.4byte gObjectEventGraphicsInfo_JP_222 @ OBJ_EVENT_GFX index 222
	.4byte gObjectEventGraphicsInfo_JP_223 @ OBJ_EVENT_GFX index 223
	.4byte gObjectEventGraphicsInfo_JP_224 @ OBJ_EVENT_GFX index 224
	.4byte gObjectEventGraphicsInfo_JP_225 @ OBJ_EVENT_GFX index 225
	.4byte gObjectEventGraphicsInfo_JP_226 @ OBJ_EVENT_GFX index 226
	.4byte gObjectEventGraphicsInfo_JP_227 @ OBJ_EVENT_GFX index 227
	.4byte gObjectEventGraphicsInfo_JP_228 @ OBJ_EVENT_GFX index 228
	.4byte gObjectEventGraphicsInfo_JP_229 @ OBJ_EVENT_GFX index 229
	.4byte gObjectEventGraphicsInfo_JP_230 @ OBJ_EVENT_GFX index 230
	.4byte gObjectEventGraphicsInfo_JP_231 @ OBJ_EVENT_GFX index 231
	.4byte gObjectEventGraphicsInfo_JP_232 @ OBJ_EVENT_GFX index 232
	.4byte gObjectEventGraphicsInfo_JP_233 @ OBJ_EVENT_GFX index 233
	.4byte gObjectEventGraphicsInfo_JP_234 @ OBJ_EVENT_GFX index 234
	.4byte gObjectEventGraphicsInfo_JP_235 @ OBJ_EVENT_GFX index 235
	.4byte gObjectEventGraphicsInfo_JP_236 @ OBJ_EVENT_GFX index 236
	.4byte gObjectEventGraphicsInfo_JP_237 @ OBJ_EVENT_GFX index 237
	.4byte gObjectEventGraphicsInfo_JP_238 @ OBJ_EVENT_GFX index 238
	.globl gEventObjectMovementData_084DDE30
gEventObjectMovementData_084DDE30:
	@ analyzed canonical ROM range 0x084DDE30-0x084DDE4B
	.globl gMauvilleOldManGraphicsInfoPointers
gMauvilleOldManGraphicsInfoPointers: @ 0x084DDE30
	@ 7-entry Mauville old-man graphics-info selector table.
	.4byte gObjectEventGraphicsInfo_JP_069 @ MAUVILLE_MAN_BARD
	.4byte gMauvilleOldManGraphicsInfo_JP_01 @ MAUVILLE_MAN_HIPSTER
	.4byte gMauvilleOldManGraphicsInfo_JP_02 @ MAUVILLE_MAN_TRADER
	.4byte gMauvilleOldManGraphicsInfo_JP_03 @ MAUVILLE_MAN_STORYTELLER
	.4byte gMauvilleOldManGraphicsInfo_JP_04 @ MAUVILLE_MAN_GIDDY
	.4byte gMauvilleOldManGraphicsInfo_JP_05 @ MAUVILLE_MAN_UNUSED1
	.4byte gMauvilleOldManGraphicsInfo_JP_06 @ MAUVILLE_MAN_UNUSED2
